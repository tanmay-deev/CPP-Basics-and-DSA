// write a program to remove all accurrences of a given element X from the array and print the updated array

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int x;
    cout << "Enter the element to be remove: ";
    cin >> x;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            continue;
        }
        else
        {
            cout << arr[i] << " ";
        }
    }
}