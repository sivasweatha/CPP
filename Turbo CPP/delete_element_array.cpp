#include <iostream.h>
#include <conio.h>

int N = 10;

int main()
{
	clrscr();
	int arr[10], del;

	cout << "Enter an array of elements \n";
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}

	cout << "\nEnter the location of the element to be deleted.\n";
	cin >> del;

	for (int l = del; l < N; l++)
	{
		arr[l] = arr[l+1];
	}

	cout << "New array \n";
	N--;

	for (int p = 0; p < N; p++)
	{
		cout << arr[p] << " ";
	}


	return 0;
}