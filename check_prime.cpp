#include <iostream>
using namespace std;

bool checkPrime(int b)
{
    for (int i = 2; i <= b / 2; i++)
    {
        if (b % i == 0)
        {
            return true;
            break;
        }
        else if (b % i != 0)
        {
            return false;
        }
    }
}

int main()
{
    int b;
    cout << "Enter: ";
    cin >> b;

    if (checkPrime(b))
    {
        cout << "Composite.";
    }
    else
    {
        cout << "Prime";
    }
    return 0;
}