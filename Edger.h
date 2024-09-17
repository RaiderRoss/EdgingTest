#include <iostream>
#include "colours.cpp"
#include <vector>
#include <sstream>
template <typename T>
class Edger {
   private:
	static int passed;
	static int failed;

   public:
	static bool test(T input, T expected);
	static void summary();
    static int getMax(int a, int b);
	static int levenshteinDistance(const std::string &s1, const std::string &s2);
	static std::vector<std::string> splitIntoWords(const std::string &str);
};



