#include "Edger.h"
template <typename T>
int Edger<T>::passed = 0;
template <typename T>
int Edger<T>::failed = 0;
template <typename T>
bool Edger<T>::test(T input, T expected) {
	bool result = false;
	int totalTest = passed + failed;
	if (input == expected) {
		std::cout << colours::LIGHT_GREEN + colours::BOLD << "Test : " << totalTest << " Passed" << colours::RESET << std::endl;
		passed++;
		result = true;
	} else {
		std::cout << colours::RED + colours::BOLD << "Test : " << totalTest << " Failed" << std::endl;
		std::cout << "Expected : " << input << std::endl;
		std::cout << "But got : " << expected << std::endl;
		std::cout << colours::RESET;
		failed++;
	}

	std::cout << colours::BLUE << "==============================================" << std::endl;
	std::cout << colours::RESET;
	return result;
}

template <>
bool Edger<std::string>::test(std::string input, std::string expected) {
	int totalTest = passed + failed;
		bool result = false;
	if (input == expected) {
		std::cout << colours::LIGHT_GREEN + colours::BOLD << "Test : " << totalTest << " Passed" << colours::RESET << std::endl;
		passed++;
		result = true;
	} else {
		std::cout << colours::RED + colours::BOLD << "Test : " << totalTest << " Failed" << std::endl;
		failed++;
	}
	std::cout << std::endl;
	std::cout << colours::BLUE << "==============================================" << std::endl;
	std::cout << colours::RESET;
	return result;
}

template <typename T>
void Edger<T>::summary() {
	int totalTest = passed + failed;
	int percentagePassed = passed * 100 / totalTest;
	std::string gradient = "";
	switch (percentagePassed) {
		case 0 ... 20:
			gradient = colours::RED;
			break;
		case 21 ... 40:
			gradient = colours::ORANGE;
			break;
		case 41 ... 60:
			gradient = colours::YELLOW;
			break;
		case 61 ... 80:
			gradient = colours::LIGHT_GREEN;
			break;
		case 81 ... 100:
			gradient = colours::GREEN;
			break;
	}
	std::cout << colours::BLUE << ">>>>>----------------------->" << colours::RESET << "\tSummary" << std::endl;
	std::cout << colours::BOLD << "Total test : " << colours::RESET << totalTest << std::endl;
	std::cout << colours::BOLD << "Percentage of testes passed : " << colours::RESET << percentagePassed << "%" << std::endl;
	std::cout << colours::GREEN << "Number of tests passed : " << colours::RESET + gradient << passed << colours::RESET << std::endl;
	std::cout << colours::RED << "Number of tests failed : " << colours::RESET << failed << std::endl;
	std::cout << colours::BLUE << ">>>>>----------------------->" << colours::RESET << "\tEnd\n"
			  << std::endl;
	passed = 0;
	failed = 0;
}

template <typename T>
int Edger<T>::getMax(int a, int b) {
	return ((a + b - abs(a - b)) / 2);
}
