#include <iostream>
#include "Bitset.h"
#include <chrono>
#include <fstream>
#include <string>
#include <typeinfo> 
using namespace std;
unsigned long long fibonacciSequence(unsigned long long n) { return n < 2 ? n : fibonacciSequence(n - 1) + fibonacciSequence(n - 2); }
bool isAAPalindrome(int* start, int* end) { return start > end ? true : *start == *end ? isAAPalindrome(start + 1, end - 1) : false; }
bool isPalindrome(int* s, int* e) { return s >= e || *s == *e && isPalindrome(++s, --e); }
unsigned long long getNumInput();


int main()
{	
	unsigned long long k;
	int a[100];
	int j = 0;
	while (true) {
		j = 0;
		k = getNumInput();
		while (k) {
			a[j] = k % 10;
			k /= 10;
			j++;
		}
		cout << isPalindrome(a, a + j - 1) << endl;
	}
	
	/*ofstream newFile;
	newFile.open("newData.txt");
	ifstream file;
	file.open("Data.txt");
	string line;
	if (file.is_open()) {
		while (getline(file, line))
		{
			newFile << line << ",T" <<endl;
			cout << line << endl;
		}

		if (remove("Data.txt") != 0) perror("Error deleting file");
		else puts("File successfully deleted");
		
		file.close();
		newFile.close();
		file.open("newData.txt");
		
		
		while (getline(file, line))
		{
			cout << line << endl;
		}
	}
	else cout << "Unable to open file" << endl;
	*/
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

