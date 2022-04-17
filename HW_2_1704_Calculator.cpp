
#include <iostream>
#include <cstring>
#include "calc_library.h"
using std::cout;
using std::cin;

void run() {
	char buffer[500];

	cout << "Enter 'exit' to quit.\n";

	while (1) {
		cout << "Enter expression: ";
		cin.getline(buffer, sizeof(buffer));

		if (strncmp(buffer, "exit", 4) == 0)
			break;

		cout << "Result: " << calculate(buffer) << "\n";
	}

}


int main()
{
	run();
}

