// write a program to count how many duplicate elements are present in the array

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int counter = 0;
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j] && i != j)
            {
                counter++;
            }
        }
    }
    cout << counter << endl;
}