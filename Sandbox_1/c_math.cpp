#include <iostream>


void initMath() {
	std::cout << "Math is initialized! \n";
}

void MultipyCalc(int a, int b) {

	int result = a*b;
	std::cout << "Result is..." << result << " \n";

}

void Increment(int& value) {
	value++;
}
