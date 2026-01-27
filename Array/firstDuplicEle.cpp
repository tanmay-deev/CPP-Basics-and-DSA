// write a program to find the first repating element in an array

#include <bits/stdc++.h>
using namespace std;

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

    int brr[100] = {0};

    for (int i = 0; i < n; i++)
    {
        brr[arr[i]]++;

        if (brr[arr[i]] > 1)
        {
            cout << arr[i] << " ";
            break;
        }
    }
    cout << endl;
}