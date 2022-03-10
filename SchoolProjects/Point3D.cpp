#include "Point3D.h"
#include <math.h>


const Point3D& Point3D::operator+(const Point3D& op) const {
	return Point3D(x + op.x, y + op.y, z + op.z);
}

//Friendfunctions

const double distance(const Point3D& a, const Point3D& b)
{
	return sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2) + pow(a.z - b.z, 2));
}

Point3D& Point3D::operator++() {
	x += 1;
	y += 1;
	z += 1;
	return *this;
}

Point3D& Point3D::operator--() {
	x -= 1;
	y -= 1;
	z -= 1;
	return *this;
}

Point3D Point3D::operator++(int) {
	Point3D tmp = *this;
	x += 1;
	y += 1;
	z += 1;
	return tmp;
}
Point3D Point3D::operator--(int) {
	Point3D tmp = *this;
	x -= 1;
	y -= 1;
	z -= 1;
	return tmp;
}