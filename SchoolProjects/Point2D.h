#pragma once
class Point2D {
public:
	Point2D(double xC, double yC) : x(xC), y(yC){}
private:
	double x, y;
public:
	double getX() { return x; }
	double getY() { return y; }
	void setX(int a) { x = a; }
	void setY(int a) { y = a; }
};