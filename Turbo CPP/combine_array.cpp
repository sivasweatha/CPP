#include <iostream.h>
#include <conio.h>

int main()
{
	clrscr();
	int data[10], sec[10];
	cout << "Enter 10\n";
	for (int i = 0; i < 10; i++)
	{
		cin >> data[i];
	}

	for(int j = 0; j < 10; j++)
	{
		cin >> sec[j];
	}

	for (int k = 0; k < 10; k++)
	{
		cout<< data[k] << "," << sec[k] << ",";
	}

	return 0;
}