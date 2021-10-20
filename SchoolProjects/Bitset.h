#pragma once
#include <bitset>
class DieStorage {
	public:
	DieStorage();
	~DieStorage();
	int getDieResult(int pos);
	void setDieResult(int pos, int result);
	int getSize();
private:
	std::bitset<3*2700000> dieArray; // 2700000 die results big
	int size;

};
