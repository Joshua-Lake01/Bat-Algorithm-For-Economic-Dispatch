#pragma once
#include <iostream>
#include "math.h"
#include <random>
#include <fstream>
#include "windows.h"
#include <vector>
#include <chrono>


using namespace std;

const int nGens = 5; // Custom up to 50
const int nGenCap = 2; //Gen cap up to 3
const int QTY[nGenCap][nGens] = { 
	{50,10,55,25,15},
	{100,85,95,34,NULL}
};


const int itterations = 10000;
const int nPeriods = 5;


