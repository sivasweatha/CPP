#include <iostream.h>
#include <conio.h>

int main()
{
	clrscr();
	int n, m, v;
	n = 0;
	m = 1;
	cout << n;
	do
	{
	cout << " " << m;
	v = n + m;
	n = m;
	m = v;
	} while( n <= 90);
	return 0;
}
