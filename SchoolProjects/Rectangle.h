#pragma once
#include "Figure2D.h"
class Rectangle : public Figure2D {
public:
	Rectangle(double x1, double y1, double x2, double y2) : Figure2D(x1, y1, x2, y2) {}
	Rectangle(Point2D& a1, Point2D& b1) : Figure2D(a1, b1) {}
	double area() { return abs((a.X() - b.X()) * (a.Y() - b.Y()));  }

private:
};