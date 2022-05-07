#include <iostream.h>
#include <conio.h>

class Human
{
	char* firstName;
	char* lastName;
public:
       char* get_firstName()
       {
		return firstName;
       }
       void  set_firstName(char* fName)
       {
		firstName = fName;
       }
       char* get_lastName()
       {
		return  lastName;
       }
       void set_lastName(char* lastName)
       {
		lastName = lastName;
       }

} H[5];

int main()
{
	clrscr();
	char* fName;
	cout << "Enter name\n";
	cin >> fName;
	Human sivi;

	sivi.set_firstName(fName);

	cout << sivi.get_firstName();

	return 0;
}