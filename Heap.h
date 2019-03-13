#pragma once
#include <iostream>
using namespace std;
class Task
{
	int ID;
	int prior;
public:
	Task()
	{
		ID = rand() % 50;
		prior = rand() % 10 + 1;
	}
	Task(int _ID, int _prior)
	{
		ID = _ID;
		prior = _prior;
		if (prior <= 0)
		{
			throw - 1;
		}
	}
	int GetId()
	{
		return ID;
	}
	int GetPrior()
	{
		return prior;
	}
	Task & operator=(const Task &b)
	{
		if (this == &b) return *this;
		ID = b.ID;
		prior = b.prior;
		return *this;
	}
	bool operator == (const Task &b)
	{
		if (ID != b.ID && prior != b.prior)
		return 0;
		return 1;
	}
	friend ostream & operator<<(ostream &os, const Task &v)
	{
		os << "ID: " << v.ID << " prior: " << v.prior << ";";
		return os;
	}
};
class DQ
{
	Task *mem;
	int size;
	int cur;
public:
	DQ(int _size);
	void insert(Task value);
	void deleteRoot();
	void deleteCur(int i);
	void show();
};
