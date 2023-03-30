#include "incr.h"
#include "decr.h"
#include <iostream>

using namespace std;

int main(void) {
	cout << "********************************\n";
	cout << "*   STORAGE CLASS SPECIFIERS   *\n";
	cout << "********************************\n" << endl;

	int result = incr();
	cout << "Result of incr: " << result << endl;

	result = decr();
	cout << "Result of decr: " << result << endl;

	cout << "\nEnd" << endl;
	return EXIT_SUCCESS;
}
