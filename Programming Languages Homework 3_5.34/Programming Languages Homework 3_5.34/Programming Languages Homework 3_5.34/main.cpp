#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

int power(int base, int exponent)
{
    if (exponent == 1)
        return base;
    else
        return base * power(base, exponent - 1);
}

int main()
{
    int base, exponent;

    cout << "Enter base and exponent: ";
    cin >> base >> exponent;

    cout << "Result: " << power(base, exponent) << endl;
	system("pause");
    return 0;
}