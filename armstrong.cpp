#include <iostream>

using namespace std;

int main()
{
	int input, n, t, sum, multiple;

	cout << "Enter a number.\n";
	cin >> input;

	n = input;
	t = 0;

	while (n != 0)
	{
		n = n/10;
		t++;
		cout << t << endl << n << endl;
	}
	cout << t<< endl;
	sum = 0;
	n = input;

	for(int i = 0; i < t; i++)
	{
	       int digit = input%10;
	       int val = input/10;
	       multiple = 1;
	       for(int j = 0; j < t; j++)
	       {
			multiple = digit * multiple;
			cout << multiple << endl;
	       }
	       input = val;
	       sum = multiple + sum;
	       cout << sum << endl;
	}

	if (sum == n)
	{
		cout << "the number is an Armstrong's number.";
	}
	else
	{
		cout << "it is not an Armstrong's number.";
	}

	return 0;
}
