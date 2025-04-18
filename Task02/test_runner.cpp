#include "logic.h"
#include <cassert>

int main() {
	assert(get_fib_number(6) == 8);
	assert(get_fib_number(-6) == -1);
	assert(get_fib_number(0) == 0);
	assert(get_fib_number(1) == 1);

	/*assert(get_fib(6) == "8 5 3 2 1 1 0 ");
	assert(get_fib(-6) == "Error");
	assert(get_fib(0) == "0");
	assert(get_fib(1) == "1");*/

	cout << "All tests passed" << endl;
	return 0;
}