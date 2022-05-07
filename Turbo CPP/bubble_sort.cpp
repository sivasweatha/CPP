#include <iostream.h>
#include <conio.h>

void swap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

int main()
{
	clrscr();
	int given_data[5];
	int n = sizeof(given_data) / sizeof(given_data[0]);

	cout << "Enter five elements \n";
	for (int i = 0; i < n; i++)
	{
		cin >> given_data[i];
	}

	for (int j = 0; j < n - 1; j++)
	{
		for (int k = 0; k < n - 1 - j; k++)
		{
			if (given_data[k] > given_data[k + 1])
			{
				swap(&given_data[k], &given_data[k + 1]);
			}
		}
	}

	cout << "The sorted array is \n";
	for (int top_ramen = 0; top_ramen < n; top_ramen++)
	{
		cout << given_data[top_ramen] << " ";
	}

	return 0;
}