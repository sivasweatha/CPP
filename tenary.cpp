#include <iostream>
using namespace std;

int main()
{
    int x;
    int MY_NUMBER;
    cout << "Enter a number: ";
    cin >> MY_NUMBER;

    x = (MY_NUMBER % 2 == 0) ? 0 : 1;

    cout << x;
    return 0;
}