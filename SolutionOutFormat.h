#pragma once

#include "Globals.h"
#include "SolutionFormat.h"

void SolutionOut() {
	std::ofstream Sol;
	Sol.open("Solutions.txt");
	Sol.clear();
		for (int x = 0; x <= nPeriods-1; x++) {
			//Sol << x + 1 << "\n";
			for (int i = 0; i <= nGens - 1; i++) {
					Sol << global_best_total[x].gb_gen[i] << "\n";
			}
			
			Sol << "\n";
		}
		Sol.close();
		std::ofstream Sol2;
		Sol2.open("FitANDdem.txt");
		Sol2.clear();
		for (int x = 0; x <= nPeriods-1; x++) {
			Sol2 << global_best_total[x].gb_Fitness << "\n";
			Sol2 << global_best_total[x].demand << "\n";
		}
		Sol2.close();

		std::ofstream Sol3;
		Sol3.open("Details.txt");
		Sol3.clear();

		bool init = true;

		float totalfreq[nPeriods] = { NULL };
		float totalvel[nPeriods] = { NULL };
		int x = 0;

		for (int x = 0; x <= nPeriods-1; x++) {
			for (int p = 0; p <= nGens; p++) {
				totalfreq[x] = totalfreq[x] + float(global_best_total[x].gb_F[p]);
				totalvel[x] = totalvel[x] + float(global_best_total[x].gb_V[p]);
			}
			totalfreq[x] = totalfreq[x] / float(nGens);
			totalvel[x] = totalvel[x] / float(nGens);
		}
		
		for (int x = 0; x <= nPeriods-1; x++) {
			Sol3 << global_best_total[x].gb_A << "\n";
			Sol3 << global_best_total[x].gb_R << "\n";
			Sol3 << totalfreq[x] << "\n";
			Sol3 << totalvel[x] << "\n";
		}

}