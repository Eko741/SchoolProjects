#include "Bitset.h"
#include <iostream>
	

int DieStorage::getDieResult(int pos)
{
	if (pos > size || pos < 0) {
		std::cout << "getDieResult: Target not in bounds" << "\n";
		return 0;
	}
	return dieArray[pos * 3] * 4 + dieArray[pos * 3 + 1] * 2 + dieArray[pos * 3 + 2];
}

DieStorage::DieStorage() { size = dieArray.size() / 3; }

DieStorage::~DieStorage()
{
	//remove dieArray;
}


void DieStorage::setDieResult(int pos, int result)
{
	if (pos > size || pos < 0) {
		std::cout << "setDieResult: Target not in bounds" << "\n";
		return;
	}
	else if (result < 1 || result > 6) {
		std::cout << "setDieResult: Result not in bounds" << "\n";
		return;
	}

	result / 4 ? dieArray.set(pos * 3) : dieArray.reset(pos * 3);
	((result + 2 ) % 4) < 2 ? dieArray.set(pos * 3 + 1) : dieArray.reset(pos * 3 + 1);
	result % 2 ? dieArray.set(pos * 3 + 2) : dieArray.reset(pos * 3 + 2);
}

int DieStorage::getSize(){ return size; }