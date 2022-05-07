#include <iostream.h>
#include <conio.h>

int main(){
	clrscr();
	int given_data[5], first, pivot,last, search_element;

	cout << "Enter 5 numbers. \n";
	for (int i = 0; i <5; i++) {
		cin >> given_data[i];
	}

	cout << "Data to be searched.";
	cin >> search_element;

	first = 0;
	last = 4;
	pivot = (first + last)/2;

	while((first <= last) && (given_data[pivot] != search_element)) {
		if(given_data[pivot] > search_element) {
			last = pivot - 1;
		} else {
			first = pivot + 1;
		}
	}
	if(given_data[pivot] == search_element) {
		cout << "Data is present.";
	} else {
		cout << "Data is not present.";
	}
	return 0;
 }