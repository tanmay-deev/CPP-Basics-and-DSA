#include <bits/stdc++.h>
using namespace std;

int main()
{
    int marks;

    cout << "Enter your marks: ";
    cin >> marks;

    if (marks > 80)
    {
        cout << "Excellent";
    }
    else if (marks > 60 && marks < 80)
    {
        cout << "Good";
    }
    else if (marks < 60 && marks > 40)
    {
        cout << "Average";
    }
    else{
        cout << "Poor";
    }
}