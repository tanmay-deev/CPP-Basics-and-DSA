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
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if(arr[i] == x){
            count ++;
        }
    }
    int new_size = n - count;
    int temp[new_size];

    int idx = 0;

    for (int i = 0; i < n; i++){
        if(arr[i] != x){
            temp[idx] == arr[i];
            idx++;
        }
    }
    for(int i = 0; i < new_size; i++){
        cout << temp[i] << " ";
    }
}