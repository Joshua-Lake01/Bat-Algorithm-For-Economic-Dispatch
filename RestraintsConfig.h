#pragma once

#include "Globals.h"
const int startup_cost[nGens] = { 500,25,25,25,25 }; //start up cost not adding
const int noload_cost[nGens] = {20,20,20,20,20};
const int hconst[nGens] = { 5,3,3,3,3 };
bool fornextp = false;
int genstore = -1;
// No load cost to add the total cost of how much it would be to run the generators, power the station, provide ect...

int noloaddebt(int currentgen, int x) {
	int additionalcost = NULL;
	if (currentgen > 0) {
		additionalcost = noload_cost[x]; // make an array of it
	}
	return additionalcost;
}

// Initeria to see how much it would provide and if the H (time constant meets the demeand of 

int inertiademand(int currentgen, int prevgen, int x) {
	if (prevgen > currentgen) {
		currentgen = currentgen * hconst[x];
	}
	return currentgen;
}
// Start up cost of a generator from going from 0 gen to >0 gen across the previous period
int startupdebt(int prevgen, int currentgen, int nextgen,int x, int period) {
	int additionalcost = NULL;
	if ((prevgen == NULL && currentgen > 0)) {
		additionalcost = startup_cost[x]; //NOTE PROBLEM: 
		// IF THE SOLUTION TO A LATER PERIOD IE: 8 before 4 AND THE GEN IS SET, THEN IT WILL TAKE NOTE OF THE PREVIOUS PERIOD AND NOT ADD ON THE COST
		//IE: period 8 = 85,10,0,34,15 is found before 7 which is 0,10,0,26,15 the cost will not add to fitness of period 8.
		//POSSIBLE SOLUTIONS: 
		//ADD COST TO PERIOD GB_FITNESS INFRONT IE: PERIOD 8 TO FORCE RECALCULATION. ()
		//OPTIMISE PERIODS SEPERATELY
		//CREATE A INCREMENTAL ORDER IN WHICH PERIODS ARE REQUIRED TO FINISH IN, NOT EFFICIENT AT ALL

		//
	}
	if ((currentgen == 0 && nextgen > 0) && AC == true) {
		global_best.gb_Fitness[period+1] = global_best.gb_Fitness[period+1] + startup_cost[x]; 
		// THIS NEEDS TO BE IMPLIMENTED TO ONLY HAPPEN ONCE PER ACCEPTED SOLUTION
		//IE: NEW VARIBLE CALLED ACCEPTED THAT IF NEW SOLUTION IS FOUND ACCEPTED == TRUE AND THEN DO THIS AND SET ACCEPTED = FALSE
		AC = false;
	}

	return additionalcost;
}


//Rampuplimit
void RampUpLimit() {
}

//central contraint engine

int constraint_engine(int prevgen, int currentgen, int nextgen,int fitness, int period, int x, int inertialtotal) {
	int additionalcost = NULL;
	//-------------------------START UP DEBT--------------------------
	additionalcost = additionalcost + startupdebt(prevgen, currentgen, nextgen,x, period);

	//--------------NO LOAD DEBT--------------------------------------
	additionalcost = additionalcost + noloaddebt(currentgen,x);

	//--------------INTERTIAL COST------------------------------------
	inertialtotal = inertialtotal + inertiademand(prevgen,currentgen,x);
	return additionalcost;
}
