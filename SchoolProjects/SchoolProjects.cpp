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
	

	cout << "Here is a Point2D(a) and a Point3D(b). The Point3D is created from the Point2D" << endl;
	Point2D a(1, 1);
	Point3D b(a);
	cout << "a: X: " << a.X() << "  Y: " << a.Y() << endl;
	cout << "b: X: " << b.X() << "  Y: " << b.Y() << "  Z: " << b.Z() << endl;
	cout << "The ++ operator works on the Point3D too!" << endl;
	b++;
	cout << "b: X: " << b.X() << "  Y: " << b.Y() << "  Z: " << b.Z() << endl;
	cout << "We can also create a Point2D(c) from a Point3D(b) with the \"Point2D\" operator" << endl;
	Point2D c = (Point2D)b;
	cout << "c: X: " << c.X() << "  Y: " << c.Y() << endl;
	cout << "With the plus operator we can add the two Point2Ds (a, c) together to make a new Point2D (d)" << endl;
	Point2D d = a + c;
	cout << "d: X: " << d.X() << "  Y: " << d.Y() << endl << endl;
	cout << "With these three Point2Ds we can make two figures. A circle(e)(a, c) and a rectangle(f)(a, d)" << endl;
	Figure2D* e = new Circle(a, c);
	Figure2D* f = new Rectangle(a, d);
	cout << "If we call Figure2Ds pure virtual area funciton it will automatically call the two shape specific area functions" << endl;
	cout << "e: Area: " << e->area() << " area untis,  f: Area: " << f->area() << " area units" << endl;

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
*/

