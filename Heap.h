#pragma once
#include <iostream>
using namespace std;
class DQ
{
	int *mem;
	int size;
	int cur;
public:
	DQ(int _size);
	void insert(int value);
	void deleteRoot();
	void deleteCur(int i);
	void show();
};
