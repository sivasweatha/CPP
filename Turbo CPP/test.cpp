#include <iostream.h>
#include <conio.h>

void swap (int *x, int *y) {
	int temp = *x;
	*x = *y;
	*y = temp;
	cout << *x << " " << *y << " ";
}

const int n = 5;

int main(){
	clrscr();
	int given_data[n];

	cout << "Enter five elements \n";
	for(int i = 0; i < n; i++) {
		cin >> given_data[i];
	}

	for(int j = 0; j < n-1; j++) {
		for(int k = 0; k <n - j; k++) {
			if (given_data[k] > given_data[k+1]) {
				swap(&given_data[k],&given_data[k+1]);
			}
		}
	}

	cout << "The sorted array is \n";
	for(int rama = 0; rama < n; rama++) {
		cout << given_data[rama] << " ";
	}

	return 0;
}