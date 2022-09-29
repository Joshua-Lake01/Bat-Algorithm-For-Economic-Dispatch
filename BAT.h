#pragma once
#include "FlagDebug.h"
#include "BatIncludes.h"
#include "SolutionFormat.h"
#include "RestraintsConfig.h"
#include "NewMainForm.h"
#include <thread>
int bestfit = 99999999;
ofstream debug;
bool once = false;
float nswitches = 0;
int LCM(int num, int mult) { //CALCULATES THE LOWEST COMMOM MULTABLE
	if (mult > num) {
		return -1;
	}
	else {
		if (num % mult == 0) {
			return mult;
		}
		else {
			LCM(num, mult + 1);
		}
	}
	
}



void fitnesscalc(int bat, int type, int t, BATS batscollection) { //CALCULATES THE FITNESS OF THE BATS CURRENT GEN VALS, SETS RESTRAINTS, SETS NEW GB AND CALCULATES THE NEW VALUES OF PULSE, A ect....
	
	file_c << "----------------IN GENS----------------\n";
	for (int x = 0; x <= nGens - 1; x++) {
		file_c << "FINAL GENS: " << batscollection.batSol[x][findp] << "\n";
		file_c << "FINAL GB_GENS: " << global_best.gb_gen[x][findp] << "\n";
	}
	file_c << "----------------END OF (OUT GENS)----------------\n";
	int fitness[nPeriods] = {NULL};
	int totgbfit = 0;
	int totfit = 0;
	int fnewinc[nPeriods] = {NULL};
	
	for (int it = 0; it <= nPeriods - 1; it++) {
		batscollection.fnew = 0;
		batscollection.totalgen[it] = 0;
		int fnewexc = 0;
		int slack_adder = 0;
		int currentdemand = LF[it];
		int guessed_demand = 0;
		int mult_genslack = 9999;
		int slack1 = 0;
		int addedcost = 0;
		

		if (type == 1) {
			if (flag == true) {
				file_c << "HAS ENTERED type 1\n";
			}
			for (int x = 0; x <= nGens - 1; x++) {

				guessed_demand = guessed_demand + batscollection.batS[x][it];
				if ((batscollection.batSol[x][it] - QTY[0][x]) < 0) {
					fnewexc = fnewexc + batscollection.batSol[x][it] * PRICE[0][x];
				}
				else {
					int slack = batscollection.batSol[x][it] - QTY[0][x];
					int intital = batscollection.batSol[x][it] - slack;
					int temp1 = intital * PRICE[0][x];
					int temp2 = slack * PRICE[0][x + 5];
					fnewexc = fnewexc + intital * PRICE[0][x];
					fnewexc = fnewexc + slack * PRICE[0][x + 5];
				}
				if (flag == true && (it == findp || findp == NULL)) {
					file_c << "NEW EXC: " << fnewexc << " FOR FORCAST " << it << "\n";
				}
				batscollection.totalgen[it] = batscollection.totalgen[it] + batscollection.batSol[x][it];
			}
			totals[bat][t] = batscollection.totalgen[it];
		}
		else {
			for (int x = 0; x <= nGens - 1; x++) {

				if ((batscollection.batS[x][it] - QTY[0][x]) < 0) {
					fnewexc = fnewexc + batscollection.batS[x][it] * PRICE[0][x];
				}
				else {
					int slack = batscollection.batS[x][it] - QTY[0][x];
					int intital = batscollection.batS[x][it] - slack;
					int temp1 = intital * PRICE[0][x];
					int temp2 = slack * PRICE[0][x + 5];
					fnewexc = fnewexc + intital * PRICE[0][x];

					fnewexc = fnewexc + slack * PRICE[0][x + 5];
				}
				if (flag == true && (it == findp || findp == NULL)) {
					file_c << "NEW EXC: " << fnewexc << " FOR FORCAST " << it << "\n";
				}
				batscollection.totalgen[it] = batscollection.totalgen[it] + batscollection.batS[x][it];
				totals[bat][t] = batscollection.totalgen[it];
			}
			float rndloud = (float)rand() / RAND_MAX;
			if (rndloud > batscollection.A && fnewinc[it] <= fnewexc) {
				for (int x = 0; x <= nGens - 1; x++) {
					batscollection.batSol[x][it] = batscollection.batS[x][it];
				}
				batscollection.pulse = batscollection.pulsemin * (1 - exp(-1 * batscollection.gamma * (t + 1))); //havent seen an effect in my code from pulsemin to pulse

				batscollection.A = batscollection.alpha * batscollection.A;

			}
		}
		pulsetotals[bat][t] = batscollection.pulse;
		Atotals[bat][t] = batscollection.A;


		//--------------------------Constrains Engine Call------------------------------------------------------

		for (int x = 0; x <= nGens - 1; x++) {
			if (it == 0) {
				//addedcost = constraint_engine(NULL, batscollection.batS[x][it], global_best.gb_gen[x][it + 1],fnewexc, it, x, inertialtotal);
			}
			else {
				//addedcost = constraint_engine(global_best.gb_gen[x][it-1], batscollection.batS[x][it], global_best.gb_gen[x][it+1], fnewexc, it, x, inertialtotal);
			}
			if ((it == 7 || it == 8) && flag == true) {
				res << "--------------------------------------------------------\n";
				res << "CURRENT PERIOD: " << it << " CURRENT GEN " << x << "\n";
				res << "PREV GEN VAL " << global_best.gb_gen[x][it - 1] << "\n";
				res << "Current GEN VAL " << batscollection.batS[x][it] << "\n";
				res << "PREV fnewexc: " << fnewexc << "\n";
				//fnewexc = fnewexc + addedcost;
				res << "ADDED COST: " << addedcost << " FNEW: " << fnewexc << "\n";
				res << "--------------------------------------------------------\n";
			}

		}


		//------------------------------------------------------------------------------------------------------------
		if (batscollection.totalgen[it] != LF[it]) {
			slack1 = abs(LF[it] - batscollection.totalgen[it]);
			slack_adder = slack1 * mult_genslack;
			fnewinc[it] = fnewexc + slack_adder;
		}
		else {
			fnewinc[it] = fnewexc;
		}
		if (flag == true && (it == findp || findp == NULL)) {
			file_c << "NEW FITNESS: " << fnewinc << " FOR FORCAST " << it << "\n";
		}
		//---------------------------------Record Prev Fitness--------------------------------------------------------

		fitness[it] = fnewinc[it];
		//------------------------------------------------------------------------------------------------------------
		//-------------------------------------------------------------------------------------------------------------
	}
	for (int it = 0; it <= nPeriods - 1; it++) { // calculates fitness across all the periods
		totgbfit = totgbfit + global_best.gb_Fitness[it];
		totfit = totfit + fnewinc[it];
		debug << "FIT FOR BAT " << bat <<  " ON PERIOD " << it << " IS: " << global_best.gb_Fitness[it] << " AND INC IS: " << fnewinc[it] << "\n";
	}

	//debug << "TOTAL FITNESS FOR BAT "<< bat << " IS " << totfit << "\n";
	for (int it = 0; it <= nPeriods - 1; it++) {
		if (type == 1) {
			if (totfit < totgbfit) {
				if (flag == true &&(it == 7 || it == 8)) {
					res << "NEW GB ACCEPTED!!!!! FOR << " << it <<"\n";
				} 
				AC = true;
				nimprov++;
				//bestfit = totfit;
				global_best.gb_Fitness[it] = fitness[it];
				global_best.gb_A = batscollection.A;
				global_best.gb_R = batscollection.pulse;
				global_best.foundby = bat;
				global_best.gb_gentot[it] = batscollection.totalgen[it];
				for (int l = 0; l <= nGens - 1; l++) {
					global_best.gb_F[l] = batscollection.Freq[l][it];
					global_best.gb_V[l] = batscollection.Vel[l][it];
					global_best.gb_genfit[l] = batscollection.genfit[l];
					global_best.gb_gen[l][it] = batscollection.batSol[l][it];


				}
			}

		}
		else {
			if (totfit < totgbfit) {

				if ((it == 7 || it == 8) && flag == true) {
					res << "NEW GB ACCEPTED!!!!! FOR << " << it << "\n";
				}
				nimprov++;
				AC = true;
			//bestfit = totfit;
				global_best.gb_Fitness[it] = fitness[it];
				file_c << "CHANGE ON ITTERATION: " << t + 1 << " WITH IMPROV: " << nimprov << " WITH FITNESS: " << global_best.gb_Fitness[it] << " FOR FORCAST " << it << "\n ";
				global_best.gb_A = batscollection.A;
				global_best.gb_R = batscollection.pulse;
				global_best.foundby = bat;
				global_best.gb_gentot[it] = batscollection.totalgen[it];
				for (int l = 0; l <= nGens - 1; l++) {
					global_best.gb_F[l] = batscollection.Freq[l][it];
					global_best.gb_V[l] = batscollection.Vel[l][it];
					global_best.gb_genfit[l] = batscollection.genfit[l];
					global_best.gb_gen[l][it] = batscollection.batS[l][it];
					file_c << "GB_GEN " << global_best.gb_gen[l][it] << "\n";
				}
			}
		}
		if (flag == true && (it == findp || findp == NULL)) {
			file_c << " INITALISED FITNESS: " << fitness[it] << " FOR FORCAST " << it << " AND BAT " << bat << "\n";
			file_c << "----------------OUT GENS----------------\n";
			for (int x = 0; x <= nGens - 1; x++) {
				file_c << "FINAL GENS: " << batscollection.batSol[x][findp] << "\n";
				file_c << "FINAL GB_GENS: " << global_best.gb_gen[x][findp] << "\n";
			}
			file_c << "----------------END OF (OUT GENS)----------------\n";
		}
	}
}

void MULTBAT(BATS batscollection, int i,int t) {
		for (int it = 0; it <= nPeriods - 1; it++) {
			if (flag == true && (it == findp || findp == NULL)) {
				file_c << "----------- CALC NEW PULSE, VEL, GEN, LOUDNESS, FREQ ----------------\n";
				file_c << "NEW PULSE: " << batscollection.pulse << " FOR FORCAST " << it << "\n";
				file_c << " NEW LOUD: " << batscollection.A << " FOR FORCAST " << it << "\n";
			}
		}
		float rndLoudness = (float)rand() / RAND_MAX;

		for (int y = 0; y <= nGens - 1; y++) {
			float rndFreq = (float)rand() / RAND_MAX;
			for (int it = 0; it <= nPeriods - 1; it++) {
				batscollection.Freq[y][it] = (float)batscollection.fmin + (float)(batscollection.fmax - batscollection.fmin) * rndFreq;
				float temp = (batscollection.batSol[y][it] - global_best.gb_gen[y][it]) * batscollection.Freq[y][it];
				//advflight = (advflight + temp);
				batscollection.Vel[y][it] = (float)batscollection.Vel[y][it] + (temp);
				//NOTE: THE VELOCITY ISNT ACHEIVING ABOVE 0, STRANGE AND NEEDS FURTHER DEBUG: FIXED
				float tempval = (float)batscollection.batSol[y][it] + (float)(batscollection.Vel[y][it]); //Reset Limits.... TODO;
				if (flag == true && (it == findp || findp == NULL)) {
					file_c << "GEN: " << batscollection.batSol[y][it] << " FOR FORCAST " << it << "\n";
					file_c << "GB_GEN" << global_best.gb_gen[y][it] << "\n";
					file_c << "NEW FRQS FOR BAT " << i << " IS : " << batscollection.Freq[y][it] << "\n";
					file_c << "NEW VELS FOR BAT " << i << " IS : " << (float)batscollection.Vel[y][it] << "\n";
					file_c << "TEMP: " << temp << "\n";
					file_c << "GEN INC: " << tempval << " FOR (END) FORCAST " << it << "\n";
				}
				if (tempval < QTYMIN[y]) {
					tempval = QTYMIN[y];
				}
				else if (tempval > QTYMAX[y]) {
					tempval = QTYMAX[y];
				}
				batscollection.batS[y][it] = tempval;
				if (flag == true && (it == findp || findp == NULL)) {
					file_c << "NEW GEN : " << batscollection.batS[y][it] << " FOR FORCAST " << it << "\n";
				}
				if (flag == true && it == findp) {
					file_c << "----------- END OF: (CALC NEW PULSE, VEL, GEN, LOUDNESS, FREQ) ----------------\n";

					//------------------DEBUG LINE--------------------- CHECK
					file_c << "----------- RANDOM SWAP WITH FN RAND NORM ----------------\n";
				}
			}


		}

		float rndSwap = ((float)rand() / RAND_MAX);
		
		for (int it = 0; it <= nPeriods - 1; it++) {
			if (flag == true && (it == findp || findp == NULL)) {
				file_c << "BAT " << i << " PULSE " << batscollection.pulse << " FOR FORCAST " << it << "\n";
				file_c << "RAND SWAP: " << rndSwap << "\n";
			}
		}
		advloud = 0;
		for (int x = 0; x <= nBATS; x++) {
			advloud = advloud + batscollection.A;
		}
		advloud = advloud / nBATS;
		res << "BAT: "<< i << " RANDOM SWAP: " << rndSwap << " PULSE: " << batscollection.pulse << "\n";
		if ((rndSwap < batscollection.pulse)) {
			//if (flag == true) {
				res << "ACCEPTED FOR BAT " << i << "\n";
			//}
			nswitches++;
			for (int x = 0; x <= nGens - 1; x++) {
				batscollection.swapped = true;
				double r1 = NULL;
				double r2 = NULL;
				double s = NULL;
				r1 = (float)rand() / RAND_MAX;
				while (r1 == 0) { r1 = rand() / RAND_MAX; }
				r2 = rand() / RAND_MAX;
				s = sqrt(-2 * log(r1)) * cos(6.283185307 * r2);
				float sd = 0.9;
				float mean = 0.3;
				unsigned seed = std::chrono::steady_clock::now().time_since_epoch().count();
				default_random_engine e(seed);
				normal_distribution<float> distrN(mean, sd);
				float Fn_RandNorm = distrN(e);
				for (int it = 0; it <= nPeriods-1; it++) {
					float tempval = static_cast<float>(global_best.gb_gen[x][it]) + batscollection.alpha * Fn_RandNorm * batscollection.A; //alpha changed to ep, and loudness for that bat changed to adverage loudness
					if (flag == true && (it == findp || findp == NULL)) {
						file_c << "SWAP BAT: " << i << "tempval :" << tempval << "\n";
					}
					if (tempval < QTYMIN[x]) {
						tempval = QTYMIN[x];
					}
					else if (tempval > QTYMAX[x]) {
						tempval = QTYMAX[x];
					}
					batscollection.batS[x][it] = (int)tempval;
					if (flag == true && (it == findp || findp == NULL)) {
						file_c << "SWAP BAT: " << i << " NEW LOUD IS:" << batscollection.A << " FOR FORCAST " << it << "\n";
						file_c << "SWAP BAT: " << i << " NEW NORAML IS:" << Fn_RandNorm << "\n";
						file_c << "SWAP BAT: " << i << " NEW ALPHA IS:" << batscollection.alpha << "\n";
						file_c << "SWAP BAT: " << i << " NEW GEN IS:" << batscollection.batS[x][it] << " FOR (END)FORCAST " << it << "\n";
					}
				}
			}
		}
		else {
			for (int it = 0; it <= nPeriods - 1; it++) {
				if (flag == true && (it == findp || findp == NULL)) {
					file_c << "NOT ACCEPTED FOR BAT " << t + 1 << " FOR FORCAST " << it << "\n";
				}
			}
		}
		if (flag == true) {
			file_c << "----------- END OF: (RANDOM SWAP WITH FN RAND NORM) ----------------\n";
		}
		//	}
			//--------------DEBUG END-------------------------------------------------
		//-------------------------Calculate New Fitness-------------------------------
		if (flag == true) {
			file_c << "----------- CALC NEW FITNESS ----------------\n";
		}

		fitnesscalc(i, 2, t, batscollection);
		int totgbfit = NULL;
		//int totfit = NULL;
		for (int it = 0; it <= nPeriods - 1; it++) { // calculates fitness across all the periods
			totgbfit = totgbfit + global_best.gb_Fitness[it];
			//totfit = totfit + fnewinc[it];

		}
		if (i == global_best.foundby && ((t == (itterations /2)) || (t == (itterations / 4)) || (t == (3*itterations) / 4)) ) {
			//if (once == false) {
				debug << "--------------- MID EXECUTION -----------------------------\n";
				debug << "BAT: " << i << " totalgbfit: " << totgbfit << "\n";
				for (int p = 0; p <= nPeriods-1; p++) {
					debug << "CALCULATED FITNES: " << global_best.gb_Fitness[p] << " : ";
					for (int l = 0; l <= nGens - 1; l++) {
						debug << "GEN " << l << " : " << global_best.gb_gen[l][p] << " : ";
					}
					debug << "\n";
				}

				debug << "----------------- END MID EXECUTION---------------------\n";
			//	once = true;
			//}
			
		}


}

void BAT5() {
	for (int it = 0; it <= nPeriods - 1; it++) {
		global_best.gb_Fitness[it] = 9999999;
		global_best.gb_gentot[it] = NULL;
	}
	debug.open("Debug.txt");
	int temp[itterations] = { NULL };
	int temp2 = NULL;
	int tempfit[] = { NULL };
	bool init = false;
	res.open("RESTRAIN.txt");
	//totalfit.open("BESTS.txt");
	ofstream bats;
	bats.open("Flights.txt");
	file_c.open("TEST0.txt");
	file_c.clear();
	for (int it = 0; it <= nPeriods - 1; it++) {
		if (flag == true && (it == findp || findp == NULL)) {
			file_c << "TEST0.txt AND " << it << "\n";
			file_c << "------------FOR " << itterations << " ITTERATIONS AND " << nBATS << " BATS AND " << it << " FORCAST WITH DEMAND " << LF[it] << "----------------\n";

		}
	}
	cout << "COMENCE CALCULATION....\n";


	//----------------------step 1/ initalising varibles------------------------------------
	int nLocalBest = 999;
	int fLocalBest = 99999999;
	int nBestIter = 0;
	int cIter = 1;
	int nImprovements = 0;
	int long fGlobalBest = 100000000;
	int nGlobalBest = 1;

	BATS batscollection[100] = { NULL };

	if (flag == true) {
		file_c << "----------- INITAL BAT SETTING (RANDOM GENS/ PULSE ECT....) ----------------\n";
	}
	for (int it = 0; it <= nPeriods - 1; it++) {
		for (int x = 0; x <= nBATS - 1; x++) {
			if (flag == true && (it == findp || findp == NULL)) {
				file_c << "BAT: " << x << " : " << " FOR FORCAST " << it << "\n";
			}
			batscollection[x].initbat(it);
		}
		if (flag == true && (it == findp || findp == NULL)) {
			file_c << "------------ END OF (INITAL BAT SETTING (RANDOM GENS/ PULSE ECT....)) ---------------------\n";
		}
	}
	//----------------------------------------------------------------
	for (int i = 0; i <= nBATS-1; i++) {
		batscollection[i].gamma = (float)(gammaval(im) / 1000);
		batscollection[i].epsilon = (float)(epsilonval(im) / 1000);
		Coefficients[0][im] = batscollection[i].gamma;
		Coefficients[1][im] = batscollection[i].alpha;
		Coefficients[2][im] = batscollection[i].epsilon;
	}
	

	//----------------step 2/Calculate Inital Fitness -------------------
	if (flag == true) {
		file_c << "----------- INITAL FITNESS CALC ----------------\n";
		file_c << "----------------CHECK GENS----------------\n";
		for (int i = 0; i <= nBATS - 1; i++) {
			for (int x = 0; x <= nGens - 1; x++) {
				file_c << "FINAL GENS: " << batscollection[i].batSol[x][findp] << "\n";
				file_c << "FINAL GB_GENS: " << global_best.gb_gen[x][findp] << "\n";
			}
			file_c << "----------------END OF (OUT GENS)----------------\n";
		}
	}
	int mult = 1;
	int LOWEST = NULL;
	//RECURSIVE FUNCTION TO FIND THE LOWEST COMMON MULTABLE TO MAKE SURE WE INITATE THE CORRECT NUMBER OF THREADS
	LOWEST = LCM(nBATS, mult);
	if (LOWEST == -1) {
		exit(-1);
	}
	for (int i = 0; i <= nBATS-1; i++) {
		//int x = NULL;
		//LONGER CODE AT COST OF QUICKER EXECUTION 
		int x = i * LOWEST;
		std::thread fit(fitnesscalc,i, 1, NULL, batscollection[i]);
	//	std::thread fit1(fitnesscalc, x+1, 1, NULL, batscollection[x]);
	//	std::thread fit2(fitnesscalc, x+2, 1, NULL, batscollection[x]);
	//	std::thread fit3(fitnesscalc, x + 2, 1, NULL, batscollection[x]);
	//	std::thread fit4(fitnesscalc, x + 2, 1, NULL, batscollection[x]);

		if (fit.joinable()) {
			fit.join();
		}
	/*	if (fit1.joinable()) {
			fit1.join();
		}
		if (fit2.joinable()) {
			fit2.join();
		}
		if (fit3.joinable()) {
			fit3.join();
		}
		if (fit4.joinable()) {
			fit4.join();
		}*/


		
	}
	int totgbfit = NULL;
	//int totfit = NULL;
	for (int it = 0; it <= nPeriods - 1; it++) { // calculates fitness across all the periods
		totgbfit = totgbfit + global_best.gb_Fitness[it];
		//totfit = totfit + fnewinc[it];

	}
	for (int i = 0; i <= nBATS - 1; i++) {
		if (i == global_best.foundby) {
			debug << "--------------- INITALISATION -----------------------------\n";
			debug << "BAT: " << i << " totalgbfit: " << totgbfit << "\n";
			for (int p = 0; p <= nPeriods-1; p++) {
				debug << "CALCULATED FITNES: " << global_best.gb_Fitness[p] << " : ";
				for (int l = 0; l <= nGens - 1; l++) {
					debug << "GEN " << l <<" : " << global_best.gb_gen[l][p] << " : ";
				}
				debug << "\n";
			}

			debug << "----------------- END INITALISATION---------------------\n";
		}
	}


	


	if (flag == true) {
		file_c << "----------- END OF: (INITAL FITNESS CALC) ----------------\n";
	}
	for (int it = 0; it <= nPeriods - 1; it++) {
		for (int l = 0; l <= nGens - 1; l++) {
			file_c << "GB_GEN: " << global_best.gb_gen[l][it] << " FOR FORCAST " << it << "\n";
		}
		file_c << global_best.gb_Fitness[it] << "\n";
	}


	//-------------------- Itteration of algorithm ----------------------------
	//if(flag == true and it == find) {
	if (flag == true) {
		file_c << "----------- MAIN ITTERATION ----------------\n";
	}
	for (int t = 0; t <= (itterations - 1); t++) {
			
		for (int i = 0; i <= nBATS-1; i++) {

			//calls the main calculation function
			//could possibly have an implementation for multithreading later down the line
			//set ammount of itterations to work on per bat
			MULTBAT(batscollection[i], i, t);
		}
		for (int it = 0; it <= nPeriods-1; it++) {
			if (flag == true && (it == findp || findp == NULL)) {
				file_c << "ITTERATION: " << t << " ON PERIOD: " << it << " FOR FORCAST " << it << "\n";
			}
		}

		int	nGlobalSlack = 0;
		int	cTotalCost = 0;
		int	fLocalMin = 99999999;
		int	fLocalMax = 0;
		int	fLocalBest = 99999999;
		int	nLocalBest = 999;
		int advflight = NULL;
		
		advflight = advflight / nBATS;
		bats << "ADVFLIGHT " << advflight << " ITTERATION " << t << "\n";
		if (flag == true) {
			for (int it = 0; it <= nPeriods - 1; it++) {
				file_c << "----------- END OF:(CALC NEW FITNESS) ----------------\n";
				file_c << "ITERRATION " << t << " : " << global_best.gb_Fitness[it] << " FOR FORCAST " << it << "\n";
			}
		}

		//-----------------------------------------------------------------------------		
	}
	totgbfit = NULL;
	//int totfit = NULL;
	for (int it = 0; it <= nPeriods - 1; it++) { // calculates fitness across all the periods
		totgbfit = totgbfit + global_best.gb_Fitness[it];
		//totfit = totfit + fnewinc[it];

	}
	for (int i = 0; i <= nBATS - 1; i++) {
		if (i == global_best.foundby) {
			debug << "--------------- END RESULT -----------------------------\n";
			debug << "BAT: " << i << " totalgbfit: " << totgbfit << "\n";
			for (int p = 0; p <= nPeriods-1; p++) {
				debug << "CALCULATED FITNES: " << global_best.gb_Fitness[p] << " : ";
				for (int l = 0; l <= nGens - 1; l++) {
					debug << "GEN " << l << " : " << global_best.gb_gen[l][p] << " : ";
				}
				debug << "\n";
			}

			debug << "----------------- END ---------------------\n";
		}
	}
	//SETTING TOTAL BESTS
	for (int it = 0; it <= nPeriods - 1; it++) {
		//------------------------
		global_best_total[it].gb_Fitness = global_best.gb_Fitness[it];
		global_best_total[it].gb_A = global_best.gb_A;
		global_best_total[it].gb_R = global_best.gb_R;
		global_best_total[it].foundby = global_best.foundby;
		global_best_total[it].gb_gentot = global_best.gb_gentot[it];
		global_best_total[it].demand = LF[it];
		for (int l = 0; l <= nGens - 1; l++) {
			global_best_total[it].gb_F[l] = global_best.gb_F[l];
			global_best_total[it].gb_V[l] = global_best.gb_V[l];
			global_best_total[it].gb_genfit[l] = global_best.gb_genfit[l];
			global_best_total[it].gb_gen[l] = global_best.gb_gen[l][it];
		}
		//file_c << "IT: " << it << "\n";
		//if (flag == true && (it == 7||it ==8)) {
			res << "-------------------------BEST SOLUTIONS------------------" << "\n";
			res << "DEMAND: " << LF[it] << "\n";
			res << "TOTAL COST: " << global_best.gb_Fitness[it] << "\n";
			res << "TOTAL LIMIT: " << global_best.gb_gentot[it] << "\n";
			res << "FOUND BY: " << global_best.foundby << "\n";
			res << "NSWAPS " << (nswitches) / 2 << "\n";
			res << "PROBSWAPS " << (nswitches / (itterations * nBATS)) / 2 << "\n";
			res << "NIMPROV " << nimprov << "\n";
			res << "---------------GENS--------------------------\n";
			for (int l = 0; l <= nGens - 1; l++) {
				res << "GEN " << l << " LOAD: " << global_best.gb_gen[l][it] << "\n";
			}
			res << "-------------------------- END OF: (BEST SOLUTIONS) --------------------------------\n\n";
			res << "----------- END OF: (MAIN ITTERATION) ----------------\n";
	//	}
		
		//-------------------------------------------------------------------------
	}
	bats.close();
	file_c.close();
	res.close();
	debug.close();
	//totalfit.close();
}
