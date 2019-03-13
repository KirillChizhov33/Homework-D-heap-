#include "Header.h"
DQ::DQ(int _size)
{
	size = _size;
	mem = new Task[size];
	cur = 0;
}
void DQ::insert(Task value)
{
	if (cur + 1 > size)
	{
		throw - 1;
	}
	mem[cur] = value;
	cur++;
	int i, j;
	i = cur - 1;
	j = (i + 1) / 2 - 1;
	while (j >= 0)
	{
		if (mem[j].GetPrior() >= mem[i].GetPrior())
		{
			return;
		}
		Task t;
		t = mem[j];
		mem[j] = mem[i];
		mem[i] = t;
		i = j;
		j = (i + 1) / 2 - 1;
	}
}
void DQ::deleteRoot()
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
		if (mem[ind].GetPrior() <= mem[right].GetPrior())
		{
			ind = right;
		}
		if (mem[i].GetPrior() > mem[ind].GetPrior())
		{
			return;
		}
		Task temp = mem[i];
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
void DQ::deleteCur(int i)
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
		if (mem[ind].GetPrior() <= mem[right].GetPrior())
		{
			ind = right;
		}
		if (mem[i].GetPrior() > mem[ind].GetPrior())
		{
			return;
		}
		Task temp = mem[i];
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
void DQ::show()
{
	for (int i = 0; i < cur; i++)
	{
		cout << i + 1 << ")" << mem[i] << endl;
	}
}
