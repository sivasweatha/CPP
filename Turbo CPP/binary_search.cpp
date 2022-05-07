#include <iostream.h>
#include <conio.h>

const int N = 10;

int main()
[
	int data[N];
	int last, first, pivot, search;
	cout << "Enter 10 elements in ascending order.\n";
	for (int i = 0; i < 10; i++)
	{
		cin >> A[i];
	}

	first = 0;
	last = 9;
	pivot = (first + last)/2;

	cout << "Enter the element to be searched.\n";
	cin >> search;

	while((search > data[pivot]) && (search < last))
	{
		first = pivot;
		pivot = (first+last)/2;
	}

	while((search < data[pivot]) && (search > first))
	{
		last = pivot;
		pivot = (first + last)/2;
	}

	if (search == data[pivot])
	{
		cout << "Element is present.";
	} else {
		cout << "Element is not present.";
	}

	return 0;
}