// write a program to find the secon largest element in the array.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int maxi = INT_MIN;
    int mini = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maxi)
        {
            mini = maxi;
            maxi = arr[i];
        }
        else if (arr[i] > maxi && arr[i] != maxi)
        {
            mini = arr[i];
        }
    }
    if (mini == INT_MIN)
    {
        cout << "There is no second largest element in the array" << endl;
    }
    else
    {
        cout << "The second largest element in the array is: " << mini << endl;
    }
}