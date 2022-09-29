#pragma once

int gammaval(int f) {
	if (f == NULL) {
		return 400;
	}
	else {
		return ((float)rand() / RAND_MAX);
	}
	
}
int epsilonval(int f) {
	if (f == NULL) {
		return 0;
	}
	else {
		return ((float)rand() / RAND_MAX);
	}
	
}