#pragma once
#include "Fordon.h"
class Cykel : public Fordon {
public:
	Cykel(int WS = 10, int FG = 3, int BG = 7, double c = 0.1, int w = 10000, int n = 4, int r = 0, int g = 0, int b = 0) : Fordon(c, w, n, r, g, b), wheelSize(WS), frontGears(FG), backGears(BG){}

	bool move(unsigned int distance);
	int Passagerare() { return 1; }
protected:

	int wheelSize;
	int frontGears;
	int backGears;

};