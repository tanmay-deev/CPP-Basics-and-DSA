
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;

    cout << "Enter the first number: ";
    cin >> a;

    cout << "Enter the second number: ";
    cin >> b;

    if (a > b)
    {
        cout << a << " is greater";
    }
    else if (a == b)
    {
        cout << "Both are equal";
    }
    else
    {
        cout << b << " is greater";
    }
}