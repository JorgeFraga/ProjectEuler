#include <iostream>

#include "Problems.h"

int main() {
	std::cout << "Starting math\n";

	int answer = problem1(5);

	std::cout << "Answer is: " << answer << ". \n";

	std::cout << "Press ENTER to continue...";
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}