#pragma once
#include <bitset>
class DieStorage {
private:
	std::bitset<100008> dieArray; // 33336 die results big
	int size;
public:
	DieStorage();
	~DieStorage();
	int getDieResult(int pos);
	void setDieResult(int pos, int result);
	int getSize();
};
