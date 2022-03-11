#pragma once
#include "Fordon.h"

class Traktor : public Fordon {
public:
	Traktor(int BWS = 20, int FWS = 10, int TW = 0, bool hasTrailer = false, double c = 0.1, int w = 10000, int n = 4, int r = 0, int g = 0, int b = 0) : Fordon(c, w, n, r, g, b), backWheelSize(BWS), frontWheelSize(FWS), hasTrailer(HS), trailerWeight(TW) {}

	int BWS() { return backWheelSize; }
	bool move(int distance);

protected:
	bool hasTrailer;
	int trailerWeight;
	int backWheelSize;
	int frontWheelSize;


};