#pragma once
#include "math.h"


const int nBATS = 2;
const int itterations = 50;
int temp[itterations] = {NULL};
int temp2 = NULL;
const int nPeriods = 1;
const int nGens = 5;
const int nGenCap = 2;
bool init = false;
float nswitches = 0;
int QTY[nGenCap][nGens] = { {50,10,55,25,15},
							{100,85,95,34,NULL}
};
int QTYMAX[nGens] = {100, 85,95,34,15};
int QTYMIN[nGens] = { 0,0,0,0,0 };
int PRICE[nGenCap][nGens] = { {20,5,90,2,4},
							  {30,40,110,12,NULL}
};
int LF[48] = { 148,115,66,74,75,112,102,51,144,148,93,138,128,101,94,104,118,96,113,96,85,114,84,68,152,105,116,109,73,139,127,115,64,102,83,60,155,138,153,102,157,154,139,107,69,116,65,155};


void BAT() {
	std::cout << "COMENCE CALCULATION....\n";
	class BATS {
	public:
		float fmin = 0.0f;
		float fmax = 4.0f;
		float Amin = 0.5f;
		float Azero = 0.9f;
		float pulsemin = 0.5f;
		float pulsemax = 1.3f;
		int fitness = 0;
		int gen[nGens] = {NULL};
		int genfit[nGens] = { NULL };
		float Freq[nGens];
		float Vel[nGens];
		float vCostSOL[4];
		float pulse;
		float A;
		float alpha = 0.98f;
		float gamma = 0.075f;
		float epsilon = 0.0f;
		int batsSOL[nGens];
		int totalgen = 0;
		//--------------------step 1/ initalising bats for first run--------------------------------------
		void initbat() {
			for (int x = 0; x <= nGens - 1; x++) {
				if (QTY[1][x] == NULL) {
					int currentmax = QTY[0][x];
					int random = rand();
					this->gen[x] = (random % currentmax) + 1;
					
				}
				else {
					int currentmax = QTY[1][x];
					this->gen[x] = (rand() % currentmax) + 1;
				}
				std::cout << this->gen[x] << "\n";
				while (this->Freq[x] > this->fmax or this->Freq[x] < this->fmin) {
					float long random = ((float)rand() / RAND_MAX) * this->fmax;
					this->Freq[x] = static_cast<float>(this->fmin) + static_cast<float>(this->fmax - this->fmin) * random;
					
				}
				//::cout << this->Freq[x] << "\n";
				
				Vel[x] = 0;
				
			}
			while (this->pulse > this->pulsemax or this->pulse < this->pulsemin) {
				float random = (float)rand() / RAND_MAX;
				this->pulse = static_cast<float>(this->pulsemin) + static_cast<float>(this->pulsemax - this->pulsemin) * random;
			}
			while (this->A > this->Azero or this->A < this->Amin) {
				float random = ((float)rand() / RAND_MAX) * this->Azero;
				this->A = static_cast<float>(this->Amin) + static_cast<float>(this->Azero - this->Amin) * random;
			}
			while (this->epsilon > 1 or this->epsilon == NULL) {
				this->epsilon = -1 + (static_cast <float> (rand()) / static_cast <float> (2)) / 1000;
			}
		}
		//----------------------------------------------------------------

	};

	for (int p = 0; p <= nPeriods - 1; p++) {
		struct {
			int foundby;
			int gb_gen[nGens];
			int long gb_Fitness = 9999999999999;
			float gb_F[nGens];
			float gb_R;
			float gb_A;
			float gb_V[nGens];
			int gb_genfit[nGens];
			int gb_gentot = NULL;

		}global_best;
		//----------------------step 1/ initalising varibles------------------------------------
		int nLocalBest = 999;
		int fLocalBest = 99999999;
		int nBestIter = 0;
		int cIter = 1;
		int nImprovements = 0;
		int long fGlobalBest = 100000000;
		int nGlobalBest = 1;
		
		BATS batcollection[nBATS];
		for (int x = 0; x <= nBATS - 1; x++) {
			//std::cout << "BAT: " << x << " : " << "\n";
			batcollection[x].initbat();
		}
		//----------------------------------------------------------------

		//----------------step 2/Calculate Inital Fitness -------------------

		for (int i = 0; i <= nBATS - 1; i++) {
			//std::cout << "BAT: " << i << " : " << "\n";
			int slack_adder = 0;
			int currentdemand = LF[p];
			int guessed_demand = 0;
			int mult_genslack = 999;
			int slack1 = 0;
			for (int x = 0; x <= nGens - 1; x++) {

				guessed_demand = guessed_demand + batcollection[i].gen[x];
				if ((batcollection[i].gen[x] - QTY[0][x]) < 0) {
					batcollection[i].genfit[x] = batcollection[i].genfit[x] + batcollection[i].gen[x] * PRICE[0][x];
				}
				else {
					int slack = batcollection[i].gen[x] - QTY[0][x];
					int intital = batcollection[i].gen[x] - slack;
					int temp1 = intital * PRICE[0][x];
					int temp2 = slack * PRICE[0][x + 5];
					batcollection[i].genfit[x] = batcollection[i].genfit[x] + intital * PRICE[0][x];
					batcollection[i].genfit[x] = batcollection[i].genfit[x] + slack * PRICE[0][x + 5];
				}
				batcollection[i].fitness = batcollection[i].fitness + batcollection[i].genfit[x];
				batcollection[i].totalgen = batcollection[i].totalgen + batcollection[i].gen[x];
			}
			if (guessed_demand != LF[p]) {
					slack1 = abs(LF[p] - batcollection[i].totalgen);
					//std::cout << ": " << slack1 << "\n";
					slack_adder = slack1 * mult_genslack;
					batcollection[i].fitness = batcollection[i].fitness + slack_adder;
			}
				if (batcollection[i].fitness < global_best.gb_Fitness) {
					global_best.gb_Fitness = batcollection[i].fitness;
					global_best.gb_A = batcollection[i].A;
					global_best.gb_R = batcollection[i].pulse;
					global_best.foundby = i;
					global_best.gb_gentot = batcollection[i].totalgen;
					for (int l = 0; l <= nGens - 1; l++) {
						global_best.gb_F[l] = batcollection[i].Freq[l];
						global_best.gb_V[l] = batcollection[i].Vel[l];
						global_best.gb_genfit[l] = batcollection[i].genfit[l];
						global_best.gb_gen[l] = batcollection[i].gen[l];
						
						
					}
				}
			
		}
		
		for (int l = 0; l <= nGens - 1; l++) {
			///std::cout << "GB_GEN: " << global_best.gb_gen[l] << "\n";
		}
		std::cout << global_best.gb_Fitness << "\n";

		//-------------------- Itteration of algorithm ----------------------------
		for (int t = 0; t <= (itterations - 1); t++) {
			//std::cout << "ITTERATION: " << t << " ON LOAD: " << p << "\n";
			
			int	nGlobalSlack = 0;
			int	cTotalCost = 0;
			int	fLocalMin = 99999999;
			int	fLocalMax = 0;
			int	fLocalBest = 99999999;
			int	nLocalBest = 999;

			for (int i = 0; i <= nBATS - 1; i++) {
				batcollection[i].pulse = batcollection[i].pulsemax * (1 - exp(-1 * batcollection[i].gamma * t));
				batcollection[i].A = batcollection[i].alpha * batcollection[i].A;
				if (batcollection[i].A <= batcollection[i].Amin) {
				//	batcollection[i].A = batcollection[i].Amin;
				}
				float rndLoudness = (float)rand() / RAND_MAX;
				for (int y = 0; y <= nGens - 1; y++) {
					float rndFreq = (float)rand() / RAND_MAX;
					//std::cout << "PREV GEN FOR BAT " << i << " IS : " << batcollection[i].gen[y] << "\n";
					//std::cout << "PREV VELS FOR BAT " << i << " IS : " << (int)batcollection[i].Vel[y] << "\n";
					batcollection[i].Freq[y] = (float)batcollection[i].fmin + (float)(batcollection[i].fmax - batcollection[i].fmin) * rndFreq;
					batcollection[i].Vel[y] = (float)batcollection[i].Vel[y] + (float)(batcollection[i].gen[y] - global_best.gb_gen[y]) * (float)batcollection[i].Freq[y];
					int tempval = batcollection[i].gen[y] + (int)(batcollection[i].Vel[y]); //Reset Limits.... TODO;
					std::cout << "NEW GEN - GB: " << (float)(batcollection[i].gen[y] - global_best.gb_gen[y]) << "\n";
					//std::cout << "NEW FRQS FOR BAT " << i << " IS : " << batcollection[i].Freq[y] << "\n";
					//std::cout << "NEW VELS FOR BAT " << i << " IS : " << (int)batcollection[i].Vel[y] << "\n";
					//std::cout << "TEMP: " << tempval << "\n";
					if (tempval < QTYMIN[y]) {
						tempval = QTYMIN[y];
					}
					else if(tempval > QTYMAX[y]) {
						tempval = QTYMAX[y];
					}
					batcollection[i].gen[y] = tempval;
				//	std::cout << "NEW GEN : " << batcollection[i].gen[y] << "\n";
					//std::cout << "vel : " << batcollection[i].Vel[y] << "\n";
				}
				
			}
			for (int i = 0; i <= nBATS - 1; i++) {
				for (int x = 0; x <= nGens - 1; x++) {
					//std::cout << "CHECK 1 GENS FOR BAT " << i << " IS : " << batcollection[i].gen[x] << "\n";
				}
			}

			//------------------DEBUG LINE--------------------- CHECK

			for (int i = 0; i <= nBATS - 1; i++) {

				float rndSwap = (float)batcollection[i].pulsemin + (float)(batcollection[i].pulsemax - batcollection[i].pulsemin) * ((float)rand() / RAND_MAX);
				//std::cout << "BAT " << i << " PULSE " << batcollection[i].pulse << "\n";
				if (rndSwap < batcollection[i].pulse) {
				//	std::cout << "ACCEPTED FOR BAT" << i << "\n";
					nswitches = nswitches + 1;
					for (int x = 0; x <= nGens - 1; x++) {


						double r1 = NULL;
						double r2 = NULL;
						double s = NULL;
						r1 = (float)rand() / RAND_MAX;
						while (r1 == 0) { r1 = rand() / RAND_MAX; }
						r2 = rand() / RAND_MAX;
						s = sqrt(-2 * log(r1)) * cos(6.283185307 * r2);
						float sd = 2;
						float mean = 0;

						float Fn_RandNorm = mean + sd * s;
						float tempval = static_cast<float>(global_best.gb_gen[x]) + batcollection[i].alpha * Fn_RandNorm * batcollection[i].A;
						if (tempval < QTYMIN[x]) {
							tempval = QTYMIN[x];
						}
						else if (tempval > QTYMAX[x]) {
							tempval = QTYMAX[x];
						}
						//if (tempval == global_best.gb_gen[x]) {}
						//else { batcollection[i].gen[x] = (int)tempval; }
				//		std::cout << "SWAP BAT: " << i << " NEW LOUD IS:" << batcollection[i].A << "\n";
				//		std::cout << "SWAP BAT: " << i << " NEW NORAML IS:" << Fn_RandNorm << "\n";
				//		std::cout << "SWAP BAT: " << i << " NEW ALPHA IS:" << batcollection[i].alpha << "\n";
				//		std::cout << "SWAP BAT: " << i << " NEW GEN IS:" << batcollection[i].gen[x] << "\n";
					}
				}
			}
				//--------------DEBUG END-------------------------------------------------
				
				for (int i = 0; i <= nBATS - 1; i++) {
					for (int x = 0; x <= nGens - 1; x++) {
				//		std::cout << "CHECK 2 GENS FOR BAT " << i << " IS : " << batcollection[i].gen[x] << "\n";
					}
				}
				//-------------------------Calculate New Fitness-------------------------------
			for (int i = 0; i <= nBATS - 1; i++) {
				batcollection[i].fitness = 0;
				batcollection[i].totalgen = 0;
				int slack_adder = 0;
				int currentdemand = LF[p];
				int guessed_demand = 0;
				int mult_genslack = 999;
				int slack1 = 0;
				for (int x = 0; x <= nGens - 1; x++) {
					batcollection[i].genfit[x] = 0;
				}
				for (int x = 0; x <= nGens - 1; x++) {
					guessed_demand = guessed_demand + batcollection[i].gen[x];
					if ((batcollection[i].gen[x] - QTY[0][x]) < 0) {
						batcollection[i].genfit[x] = batcollection[i].genfit[x] + batcollection[i].gen[x] * PRICE[0][x];
					}
					else {
						int slack = batcollection[i].gen[x] - QTY[0][x];
						int intital = batcollection[i].gen[x] - slack;
						int temp1 = intital * PRICE[0][x];
						int temp2 = slack * PRICE[0][x + 5];
						batcollection[i].genfit[x] = batcollection[i].genfit[x] + intital * PRICE[0][x];
						batcollection[i].genfit[x] = batcollection[i].genfit[x] + slack * PRICE[0][x + 5];
					}
					batcollection[i].fitness = batcollection[i].fitness + batcollection[i].genfit[x];
					batcollection[i].totalgen = batcollection[i].totalgen + batcollection[i].gen[x];
				//	std::cout << "NEW GENS FOR BAT " << i <<" IS : " << batcollection[i].gen[x] << "\n";
				}

				
				
				if (guessed_demand != LF[p]) {
					slack1 = abs(LF[p] - batcollection[i].totalgen);
					slack_adder = slack1 * mult_genslack;
					batcollection[i].fitness = batcollection[i].fitness + slack_adder;
				}
				//std::cout << "FITNESS: " << batcollection[i].fitness << "\n";
				
				float rndloud = (float)rand() / RAND_MAX;
				if (rndloud > batcollection[i].A and batcollection[i].fitness <= global_best.gb_Fitness) {
					nswitches = nswitches + 1;
					global_best.gb_Fitness = batcollection[i].fitness;
					global_best.gb_A = batcollection[i].A;
					global_best.gb_R = batcollection[i].pulse;
					global_best.foundby = i;
					global_best.gb_gentot = batcollection[i].totalgen;
					for (int l = 0; l <= nGens - 1; l++) {
						global_best.gb_F[l] = batcollection[i].Freq[l];
						global_best.gb_V[l] = batcollection[i].Vel[l];
						global_best.gb_genfit[l] = batcollection[i].genfit[l];
						global_best.gb_gen[l] = batcollection[i].gen[l];
						
					}
				}
			//	std::cout << "ITERRATION " << t << "FOR BAT "<< i<< " : " << global_best.gb_Fitness << "\n";

			}
			//-----------------------------------------------------------------------------
		}
		std::cout << "-------------------------BEST SOLUTIONS------------------" << "\n";
		std::cout << "DEMAND: " << LF[p] << "\n";
		std::cout << "TOTAL COST: " << global_best.gb_Fitness << "\n";
		std::cout << "TOTAL LIMIT: " << global_best.gb_gentot << "\n";
		std::cout << "NSWAPS " << (nswitches) / 2 << "\n";
		std::cout << "PROBSWAPS " << (nswitches / (itterations*nBATS)) / 2 << "\n";
		std::cout << "---------------GENS--------------------------\n";
		for (int l = 0; l <= nGens - 1; l++) {
			std::cout << "GEN " << l << " LOAD: " << global_best.gb_gen[l] << "\n";
		}
		std::cout << "----------------------------------------------------------\n\n";

		//-------------------------------------------------------------------------
	}
}
