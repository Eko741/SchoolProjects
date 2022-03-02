#include <iostream>
#include "Bitset.h"
#include <string>
#include "Point2D.h"
#include "Point3D.h"
#include "Point3DList.h"
using namespace std;
unsigned long long fibonacciSequence(unsigned long long n) { return n < 2 ? n : fibonacciSequence(n - 1) + fibonacciSequence(n - 2); }
bool isAAPalindrome(int* start, int* end) { return start > end ? true : *start == *end ? isAAPalindrome(start + 1, end - 1) : false; }
bool isPalindrome(int* s, int* e) { return s >= e || *s == *e && isPalindrome(++s, --e); }
unsigned long long getNumInput();

int main()
{	
	Point3DList list;
	list.addPoint((0, 0, 0));
	Point3D a(1, 1, 1), b(2, 2, 2);
	list.addPoint(a);
	list.addPoint(b);
	cout << distance(list.getPoint(0), list.getPoint(1)) << "  " << distance(list.getPoint(1), list.getPoint(2)) << "  " << distance(list.getPoint(0), list.getPoint(2));
	
	return 0;
}

unsigned long long getNumInput() {
	unsigned long long a;
	while (cin >> a, !cin.good()){ //Checks the errorflag
		cin.clear(); //Clears the error flag
		cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignores the bad input
	}
	return a;
}

