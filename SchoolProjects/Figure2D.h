#pragma once
#include "Point2D.h"
class Figure2D {
public:
	Figure2D(double x1, double y1, double x2, double y2) : a(Point2D(x1, y1)), b(Point2D(x2, y2)) {}
	Figure2D(Point2D & a1, Point2D & b1) : a(a1), b(b1) {}
	virtual double area() = 0;

protected:
	Point2D a, b;
};