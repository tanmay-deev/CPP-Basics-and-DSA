#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cout << "Enter a number: " << endl;
    cin >> n;

    if (n >= 300 and n <= 460)
    {
        cout << "The Price is MacBook";
    }
    else if (n >= 200 and n <= 280)
    {
        cout << "The Price is Kurkure.";
    }
    else if (n >= 1100 and n <= 1500)
    {
        cout << "The prize is Cycle";
    }
    else if (n > 50 and n <= 80)
    {
        cout << "The Price is Bike";
    }
    else
    {
        cout << "Better luck next time!";
    }
}