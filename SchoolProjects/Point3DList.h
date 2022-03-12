#pragma once
#pragma once
#include "Point3D.h"
#include <iostream>

class Point3DL {
public:
	Point3DL(const Point3D& d) : data(d) {}

	Point3D data;
	Point3DL* next;
	Point3DL* prev;
};

class Point3DList {
public:
	Point3DList() { numberOfLists++; }
	~Point3DList() { numberOfLists--; }
	void addPoint(const Point3D& point);
	void removePoint(const int point);
	Point3D& getPoint(const int point) const;

	const static int getNumberOfLists() {
		return numberOfLists;
	}

	std::ostream * operator>>(std::ostream * cout)const;
	Point3D& operator[](const unsigned int point);
	

private:
	int length = 0;
	Point3DL* start;
	static int numberOfLists;
};