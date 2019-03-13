#include "Heap.h"
int main()
{
	DQ Temp(10);
	Task N1;
	Task N2;
	Task N3;
	Task N4;
	Task N5;
	Task N6;
	Task N7;
	Task N8;
	Task N9;
	Task N10;
	cout << "Set of tasks: \n";
	cout << N1 << "\n" << N2 << "\n" << N3 << "\n" << N4 << "\n" << N5 << "\n" << N6 << "\n" << N7 << "\n" << N8 << "\n" << N9 << "\n" << N10 << "\n";
	Temp.insert(N1);
	Temp.insert(N2);
	Temp.insert(N3);
	Temp.insert(N4);
	Temp.insert(N5);
	Temp.insert(N6);
	Temp.insert(N7);
	Temp.insert(N8);
	Temp.insert(N9);
	Temp.insert(N10);
	cout << "\nTasks in the heap:\n";
	Temp.show();
	return 0;
}
