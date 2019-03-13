#pragma once
#include <iostream>
using namespace std;
class DQ
{
	int *mem;
	int size;
	int cur;
public:
	DQ(int _size)
	{
		size = _size;
		mem = new int[size];
		cur = 0;
	}
	void insert(int value)
	{
		if (cur + 1 > size)
		{
			throw - 1;
		}
		mem[cur] = value;
		//cout << mem[cur] << endl;
		cur++;
		int i, j;
		i = cur - 1;
		j = (i + 1) / 2 - 1;
		while (j >= 0)
		{
			if (mem[j] >= mem[i])
			{
				return;
			}
			int t;
			t = mem[j];
			mem[j] = mem[i];
			mem[i] = t;
			i = j;
			j = (i + 1) / 2 - 1;
		}
	}
	void deleteRoot()
	{
		if (cur == -1)
		{
			throw - 1;
		}
		mem[0] = mem[cur - 1];
		cur--;
		int i, left, right;
		i = 0;
		left = (i + 1) * 2 - 1;
		if (left + 1 < cur)
		{
			right = left + 1;
		}
		else
		{
			right = cur;
		}
		while (left <= cur)
		{
			int ind = left;
			if (mem[ind] <= mem[right])
			{
				ind = right;
			}
			if (mem[i] > mem[ind])
			{
				return;
			}
			int temp = mem[i];
			mem[i] = mem[ind];
			mem[ind] = temp;
			i = ind;
			left = (i + 1) * 2 - 1;
			if (left + 1 < cur)
			{
				right = left + 1;
			}
			else
			{
				right = cur;
			}
		}
	}
	void deleteCur(int i)
	{
		if (cur == -1)
		{
			throw - 1;
		}
		mem[i] = mem[cur - 1];
		cur--;
		int left, right;
		left = (i + 1) * 2 - 1;
		if (left + 1 < cur)
		{
			right = left + 1;
		}
		else
		{
			right = cur;
		}
		while (left <= cur)
		{
			int ind = left;
			if (mem[ind] <= mem[right])
			{
				ind = right;
			}
			if (mem[i] > mem[ind])
			{
				return;
			}
			int temp = mem[i];
			mem[i] = mem[ind];
			mem[ind] = temp;
			i = ind;
			left = (i + 1) * 2 - 1;
			if (left + 1 < cur)
			{
				right = left + 1;
			}
			else
			{
				right = cur;
			}
		}
	}
	void show()
	{
		//cout << "kk" << mem[cur];
		for (int i = 0; i < cur; i++)
		{
			cout << i+1 << ")" << mem[i] << endl;
		}
	}
};
