#include <iostream>
#include "Bitset.h"
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
	Point3D a = Point3D(2, 2, 2);
	Point3D b = Point3D(1, 1, 1);
	cout << a.distance(b) << endl;
	
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

