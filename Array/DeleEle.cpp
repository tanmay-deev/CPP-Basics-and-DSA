// write a program to delete an element from the given position in the array.

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int position;
    cout << "Enter the position to be deleted: ";
    cin >> position;

    for(int i = position; i < n; i++){
        arr[i - 1] = arr[i];
    }
    n--;

    cout << "Updated array: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

}