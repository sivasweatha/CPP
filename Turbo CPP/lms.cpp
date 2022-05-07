#include <iostream.h>
#include <conio.h>


class Booklist
{
	char bname[50];
	char bno [4];
	char bauthor[20];
	char byear[4];
	char no_copies[3];
 public:
	void Create_Book() {
	for (int i = 0; i < 100; i++)
	{
	cout << "To Record a New Book\n";
	cout << "Name of Book:\n";
	cin >> bname[i];
	cout << "Number for Book:\n";
	cin >> bno[i];
	cout << "Author of the Book:\n";
	cin >> b.bauthor[i];
	cout << "Year Published:\n";
	cin >> b.byear[i];
	cout << "Number of Copies:\n";
	cin >> b.no_copies[i];
	}
};

void Display_All()
{
	cout << "All Book Records\n";
	for(int j = 0; j < 100; j++)
	{
		cout << b[i];
	}

};

void Menu()
{
	clrscr();
	int choice;
	do
	 {
		cout << "1. Enter Data\n";
		cout << "2. Display All Records\n";
		cout << "3. Search a Record\n";
		cout << "4. Exit\n";
		cout << "Enter the number to perform:\n";
		cin >> choice;
		switch (choice)
		{
		case 1:
			Create_Book();
			break;
		case 2:
			Display_All();
			break;
		}
	} while(choice != 4);
}

int main()
{
	clrscr();
	Menu();


	return 0;
}