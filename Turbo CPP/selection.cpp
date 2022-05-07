#include <iostream.h>
#include <conio.h>

int main()
{
	clrscr();
	int arr[5];

	cout << "Enter elements\n";
	for (int k = 0; k < 5; k++)
	{
		cin >> arr[k];
	}

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5-1; j++)
		{
			if( arr[j] > arr[j+1])
			{
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}

	cout << "The sorted array is \n";
	for (int p = 0; p < 5; p++)
	{
		cout << arr[p] << " ";
	}

	return 0;
}