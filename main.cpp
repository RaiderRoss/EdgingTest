// main.cpp
#include <iostream>
#include <string>

#include "Edger.cpp"
int main() {
	Edger<int>::test(2, 3);
	Edger<int>::test(3, 3);
	Edger<int>::test(3, 4);
	Edger<int>::test(3, 5);
	Edger<int>::test(1, 1);
	int * test = new int(3);
	int * test2 = new int(4);
	Edger<int>::test(*test,*test2);
	Edger<std::string>::test("Ranger1 rolled a1 and does 5 damage to FFTDummy2","Ranger1 rolled a 1 and does 0 damage to FFTDummy1");
	Edger<std::string>::test("Rang","Rang");
	Edger<std::string>::summary();
	Edger<int>::summary();
	delete test;
	delete test2;
	return 0;
}
