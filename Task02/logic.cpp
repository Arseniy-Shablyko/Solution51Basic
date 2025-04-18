#include "logic.h"
int get_fib_number(int number) {
	if (number < 0) {
		return -1;
	}

	if (number == 0) {
		return 0;
	}

	if (number == 1) {
		return 1;
	}

	return get_fib_number(number - 1) + get_fib_number(number - 2);
}

//string get_fib(int number) {
//	if (number < 0) {
//		return "Error";
//	}
//
//	if (number == 0) {
//		return "0";
//	}
//
//	if (number == 1) {
//		return "1";
//	}
//
//	return get_fib(number - 1 + (number - 2)) + " ";
//}
