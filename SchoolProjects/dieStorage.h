#pragma once
#include <bitset>
class DieStorage {
	public:
	DieStorage(int size);
	~DieStorage();
	int getDieResult(int pos);
	void setDieResult(int pos, int result);
	int getSize();
	int getListSize(){ return sizeof(dieList); }
private:
	int size;
	char* dieList;

};
