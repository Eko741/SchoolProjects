#include "dieStorage.h"
#include <iostream>
#include <math.h>
	

int DieStorage::getDieResult(int pos)
{
	if (pos > size || pos < 0) {
		std::cout << "getDieResult: Target not in bounds" << "\n";
		return 0;
	}

	return (*((int*)(dieList + (pos / 8) * 3)) >> ((7 - (pos % 8)) * 3 + 8)) & 7;
}

DieStorage::DieStorage(int s) : dieList(new char[((s - 1) / 8) * 3 + 4]), size(s) { }

DieStorage::~DieStorage()
{
	//remove dieArray;
}


void DieStorage::setDieResult(int pos, int result){

	if (pos > size || pos < 0) {
		std::cout << "setDieResult: Target not in bounds" << "\n";
		return;
	}
	else if (result < 1 || result > 6) {
		std::cout << "setDieResult: Result not in bounds" << "\n";
		return;
	}

	(*((int*)(dieList + (pos / 8) * 3)) &= ~((7 - result) << 8 + (7 - pos % 8) * 3)) |= (result << 8 + (7 - pos % 8) * 3);
}

int DieStorage::getSize(){ return size; }