#include <iostream.h>
#include <conio.h>

int N = 10;

int main()
{
	clrscr();
	int arr[10], location, del;

	cout << "Enter an array of elements \n";
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}

	cout << "Enter location of new value.\n";
	cin >> location;

	for (int j = N-1; j >= location; j--)
	{
		arr[j+1] = arr[j];
	}

	cout << "Enter value to be inserted.\n";
	cin  >> arr[location];
	N++;

	cout << "Updated array\n";

	for (int k = 0; k < N; k++)
	{
		cout << arr[k] << " ";
	}

	cout << "\nEnter the location of the element to be deleted.\n";
	cin >> del;

	for (int l = del; l < N - 1; l--)
	{
		arr[l] = arr[l+1];
	}

	cout << "New array \n";
	N --;

	for (int p = 0; p < N; p++)
	{
		cout << arr[p] << " ";
	}


	return 0;
}