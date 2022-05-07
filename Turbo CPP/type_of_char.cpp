#include <iostream.h>
#include <ctype.h>
#include <conio.h>

int main()
{
	clrscr();
	char input;
	cout << "Enter a character/n";
	cin >> input;

	if (isalpha(input)) {
	       cout << "It is an alphabet.";
	}
	if (isdigit(input)) {
		cout << "it is a number.";
	} else {
	cout << "It is a special character.";
	}
	return 0;
}