#pragma once
#include "Globals.h"

struct {
	int foundby = NULL;
	int gb_gen[nGens][nPeriods] = { NULL };
	int gb_Fitness[nPeriods] = { 999999999 };
	float gb_F[nGens] = { NULL };
	float gb_R = NULL;
	float gb_A = NULL;
	float gb_V[nGens] = { NULL };
	int gb_genfit[nGens] = { NULL };
	int gb_gentot[nPeriods] = { NULL };

}global_best;
bool prevfit = false;
struct {
	int foundby;
	int gb_gen[nGens];
	int gb_Fitness;
	float gb_F[nGens];
	float gb_R;
	float gb_A;
	float gb_V[nGens];
	int gb_genfit[nGens];
	int gb_gentot;
	int demand;
}global_best_total[nPeriods];
