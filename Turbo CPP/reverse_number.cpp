#include <iostream.h>
#include <conio.h>

int main()
{
	clrscr();
	int n, m=0, sum=0, rem;

	cout << "Enter your value\n";
	cin >> n;

	int *input;
	input = &n;

	int p = n;

	while (p != 0)
	{
		p = p/10;
		m++;
	}

	int t = m;

	while( *input != 0)
	{
		rem = *input%10;
		*input = *input/10;
		for (int i = 1; i < t; i++)
		{
			rem = rem*10;
			cout << rem << endl;
		}
		t--;
		sum = rem + sum;

	}

       cout << sum;

	return 0;
}
