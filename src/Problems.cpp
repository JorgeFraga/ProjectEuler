#include "Problems.h"

int problem1(int upperLimit) {
	int answer = 0;
	for (int i = 1; i < upperLimit; i++) {
		if (i % 3 == 0 || i % 5 == 0) {
			answer += i;
		}
	}

	return answer;
}