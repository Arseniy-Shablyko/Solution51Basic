#include "logic.h"
long long get_factorial(int number) {
	if (number < 0) {
		return 0;
	}
	if (number == 0) {
		return 1;
	}

	if (number == 1) {
		return 1;
	}

	return number * get_factorial(number - 1);
}