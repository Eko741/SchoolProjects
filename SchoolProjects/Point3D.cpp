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
