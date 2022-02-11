#include <iostream>
#include "dieStorage.h"
#include <chrono>
#include <string>
#include "Point2D.h"
#include "Point3D.h"
using namespace std;
unsigned long long fibonacciSequence(unsigned long long n) { return n < 2 ? n : fibonacciSequence(n - 1) + fibonacciSequence(n - 2); }
bool isAAPalindrome(int* start, int* end) { return start > end ? true : *start == *end ? isAAPalindrome(start + 1, end - 1) : false; }
bool isPalindrome(int* s, int* e) { return s >= e || *s == *e && isPalindrome(++s, --e); }
unsigned long long getNumInput();

int main()
{
	
	const char c[5] ={'A', 'B', 'C', 'B', 'A'};
	cout << isPalindrome((int *)c, (int *)c + 4);
}

unsigned long long getNumInput() {
	unsigned long long a;
	cin >> a;
	while (!cin.good()){
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cin >> a;
	}
	return a;
}

