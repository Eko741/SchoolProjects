#pragma once
#include "Point3DList.h"
void Point3DList::addPoint(const Point3D& point)
{
	if (!length) 
		start = new Point3DL(point);
	
	else {
		Point3DL* last = start;
		for (int i = 0; i < length - 1; i++) 
			last = last->next;
		
		last->next = new Point3DL(point);
		last->next->prev = last;
	}
	length++;
}

void Point3DList::removePoint(const int point)
{
	Point3DL* current = start;

	if (point) {
		for (int i = 0; i < point; i++) 
			current = current->next;
		(current->prev)->next = current->next;
	}

	if (length - 1 != point)
		(current->next)->prev = current->prev;

	delete current;
}

Point3D& Point3DList::getPoint(const int point) const
{
	Point3DL* current = start;
	for (int i = 0; i < point; i++) 
		current = current->next;
	return current->data;
}