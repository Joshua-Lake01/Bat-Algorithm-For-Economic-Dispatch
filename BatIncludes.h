#pragma once

#include "Globals.h"
#include "CoefficientImprovement.h"
#include "FlagDebug.h"
//---------
int nBATS = 5; // Custom up to 100
int QTYMAX[nGens] = { 100, 85,95,34,15 };
int QTYMIN[nGens] = { 0,0,0,0,0 };
int PRICE[3][nGens] = { {20,5,90,2,4},
						{30,40,110,12,NULL}
};
int LF[48] = { 148,115,66,74,75,112,102,51,144,148,93,138,128,101,94,104,118,96,113,96,85,114,84,68,152,105,116,109,73,139,127,115,64,102,83,60,155,138,153,102,157,154,139,107,69,116,65,155 };
//---------

int Coefficients[3][9999];
int inertialtotal = NULL;
float advloud = NULL;
bool AC = false;
//int nimprov = 0;
ofstream totalfit;
ofstream file_c;
ofstream res;
int totals[100][itterations];
float pulsetotals[100][itterations];
float Atotals[100][itterations];

//implement a method to force generation values to be in range of demand.
class BATS {
public:
	float fmin = 0.0f;
	float fmax = 3.0f;
	// decrease fmax as itterations preceed.
	float Amin = 0.8f;
	float Azero = 0.9f;
	float pulsemin = 0.5f;
	float pulsemax = 1.0f;
	int fnewExc = 0;
	int fnewInc = 0;
	int bestfit = NULL;
	int fnew = NULL;
	//int gen[nGens] = {NULL}; //inc for 
	int genfit[nGens] = { NULL };
	float Freq[nGens][nPeriods]; //inc for 
	float Vel[nGens][nPeriods];  //inc for
	float vCostSOL[4];
	float pulse = { NULL };
	float A = { NULL };
	float alpha = 0.999f;
	float gamma = 0.4f;
	float epsilon = 0.0f;
	int totalgen[nPeriods] = { NULL };
	bool swapped = false;
	int batS[nGens][nPeriods] = { NULL }; //inc for
	int batSol[nGens][nPeriods] = { NULL }; //inc for 
	//--------------------step 1/ initalising bats for first run--------------------------------------
	void initbat(int it) {
		for (int x = 0; x <= nGens - 1; x++) {
			float random = ((float)rand() / RAND_MAX);
			float temp = QTYMAX[x] * random;
			this->batSol[x][it] = (int)temp;
			if (flag == true && it == findp) {
				file_c << "INITAL GEN: " << this->batSol[x][it] << " FOR FORCAST " << it << "\n";
			}
			while (this->Freq[x][it] > this->fmax || this->Freq[x][it] < this->fmin) {
				float long random = ((float)rand() / RAND_MAX) * this->fmax;
				this->Freq[x][it] = static_cast<float>(this->fmin) + static_cast<float>(this->fmax - this->fmin) * random;

			}
			if (flag == true && it == findp) {
				file_c << "FREQ: " << this->Freq[x][it] << " FOR FORCAST " << it << "\n"; //
			}
			Vel[x][it] = 0;

		}
		while (this->pulse > this->pulsemax || this->pulse < this->pulsemin) {
			float random = (float)rand() / RAND_MAX;
			this->pulse = static_cast<float>(this->pulsemin) + static_cast<float>(this->pulsemax - this->pulsemin) * random;

		}
		if (flag == true && it == findp) {
			file_c << "INIT PULSE: " << this->pulse << " FOR FORCAST " << it << "\n";
		}
		while (this->A > this->Azero || this->A < this->Amin) {
			float random = ((float)rand() / RAND_MAX) * this->Azero;
			this->A = static_cast<float>(this->Amin) + static_cast<float>(this->Azero - this->Amin) * random;

		}
		if (flag == true && it == findp) {
			file_c << "INIT LOUD: " << this->A << " FOR FORCAST " << it << "\n";
		}
		while (this->epsilon > 3 || this->epsilon == NULL) {
			this->epsilon = -3 + (static_cast <float> (rand()) / static_cast <float> (6)) / 1000;
		}
	}
	//----------------------------------------------------------------

};
