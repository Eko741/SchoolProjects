#pragma once
#include "Fordon.h"

class Traktor : public Fordon {
public:
	Traktor(double c = 0.1, int w = 10000, int n = 4, int r = 0, int g = 0, int b = 0) : Fordon(c, w, n, r, g, b) {}

protected:
	bool hasTrailer;
	int trailerWeight;
	int backWheelSize;
	int frontWheelSize;


};