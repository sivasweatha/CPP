#include <iostream.h>
#include <conio.h>

void swapRef(int *x, int *y)
{
	cout << "x was " << *x << endl << "y was " << *y << endl;
	int temp = *x;
	*x = *y;
	*y = temp;
	cout <<"now x is " << *x << endl << "now y is " << *y <<endl;
}

void swapVal(int a, int b)
{
       cout << "a was " << a << endl << "b was " << b << endl;
       int tem = a;
       a = b;
       b = tem;
       cout << "now a is " << a << endl << "now b is " << b << endl;
}

int main()
{
    clrscr();
    int numberOne, numberTwo;
    cout << "Input two numbers\n";
    cin >> numberOne >> numberTwo;

    int choice;
    do
    {
    cout << "0. Exit the program.\n";
    cout << "1. Swap the two number by call by reference. \n";
    cout << "2. Swap the two numbers by call by value. \n";
    cin >> choice;

    switch(choice)
    {
	case 1:
		swapRef(&numberOne, &numberTwo);
		break;
	case 2:
		swapVal(numberOne, numberTwo);
		break;
	case 0:
		cout << "Thanks, bye.";
    }
    } while (choice != 0);
    return 0;
}