#include "Point2D.h"	

const Point2D& Point2D::operator+(const Point2D& b) const
{
	return Point2D(x + b.x, y + b.y);
}

const Point2D& Point2D::operator-() const {
	return Point2D(x * -1, y * -1);
}
const double distance(const Point2D& a, const Point2D& b)
{
	return sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2));
}