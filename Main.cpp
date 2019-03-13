#include "Header.h"
int main()
{
	DQ Temp(10);
	int k = 0;
	Temp.insert(3);
	Temp.insert(2);
	Temp.insert(8);
	Temp.insert(9);
	Temp.insert(1);
	Temp.insert(5);
	Temp.insert(4);
	Temp.insert(9);
	Temp.insert(5);
	Temp.insert(7);
	Temp.show();
	Temp.deleteRoot();
	Temp.deleteCur(3);
	Temp.show();
	return 0;
}
