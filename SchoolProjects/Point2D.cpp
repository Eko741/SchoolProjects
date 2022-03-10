#include "Point2D.h"	

const Point2D& Point2D::operator+(const Point2D& b) const
{
	return Point2D(x + b.x, y + b.y);
}

const Point2D& Point2D::operator-() const {
	return Point2D(x * -1, y * -1);
}