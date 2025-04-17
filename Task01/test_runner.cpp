#include "logic.h"
#include <cassert>
#include <iostream>
using namespace std;

int main() {
	assert(get_factorial(5) == 120);
	assert(get_factorial(1) == 1);
	assert(get_factorial(0) == 1);
	assert(get_factorial(-2) == 0);

	cout << "All tests passed" << endl;
	return 0;
}