#pragma once
#include <iostream>
class Point2D {
public:
	Point2D(double xC = 0, double yC = 0) : x(xC), y(yC) { }
	//Point2D(Point3D a) : x(a.X()), y(a.Y()){}
private:
	double x, y;
public:
	double X() const { return x; }
	double Y() const { return y; }
	void X(double a) { x = a; }
	void Y(double a) { y = a; }
	const Point2D & operator+(const Point2D& b) const;
	const Point2D& operator-() const;
	friend const double distance(const Point2D& a, const Point2D& b);
	
};