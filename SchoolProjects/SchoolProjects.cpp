#include <iostream>
#include <fstream>
#include "Bitset.h"
#include <string>
#include "Point2D.h"
#include "Point3D.h"
#include "Point3DList.h"
#include "Fordons.h"
#include "Rectangle.h"
#include "Circle.h"
#include "Figure2D.h"
using namespace std;
unsigned long long fibonacciSequence(unsigned long long n) { return n < 2 ? n : fibonacciSequence(n - 1) + fibonacciSequence(n - 2); }
bool isAAPalindrome(int* start, int* end) { return start > end ? true : *start == *end ? isAAPalindrome(start + 1, end - 1) : false; }
bool isPalindrome(int* s, int* e) { return s >= e || *s == *e && isPalindrome(++s, --e); }
unsigned long long getNumInput();

int main()
{	 
	/*Figure2D* figures[4];
	figures[0] = new Circle(0, 0, 1, 0);
	figures[1] = new Circle(0, 0, 1, 1);
	figures[2] = new Rectangle(0, 0, 1, 1);
	figures[3] = new Rectangle(0, 0, 2, 2);

	for (int i = 0; i < 4; i++)
		cout << figures[i]->area() << endl;
	*/

	Point3DList list;
	if (!list.get2DFLData("binData.FL"))
		cout << "fuck";
	list >> &cout;

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

/*
Det �r str�ngt n�sv�ndigt att skriva en destruktor i m�nga fall. Men det vanligaste �r att man har dynamisk allokerad data som en del av sitt objekt (en pekare till dynamiskt allokerad data). F�r att inte f� minesl�ckor
beh�ver man anv�nda delete p� dem.
Om man placerar en funktions definition i klassdefinitionen kommer funktionen vara inline. Det betyder att maskinkoden kopieras in p� st�llet d�r funktionen kallas ista�llet f�r att g�ra kalla funktionen.
En l�nkad lista �r en lista d�r varje element i listan har en pekare till den efter i listan eventuellt ocks� den bakom.
En k� �r en lista d�r f�rst in �r f�rst ut.
Den dynamiska datatypen �r den verkliga datatypen av ett objekt medans den statsika datatypen �r datatypen som anv�nds f�r att n� objektet.
Dynamisk binding anv�nds vid virtuella functioner vid dynamisk bindning anv�nds funktionen fr�n den dynamiska datatypen. Vid statisk binding anv�nds den statiska datatypens funktion.
D� programmet �nd� avslutas efter close() anropet beh�vs den inte. Allt close g�r �r att koppla bort filen fr�n objektet.





*/

