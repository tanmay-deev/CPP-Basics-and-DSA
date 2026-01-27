// write a program to insert a new element at a given position in the array.

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

    int element, position;
    cout << "Enter the element to be inserted: ";
    cin >> element;
    cout << "Enter the position : ";
    cin >> position;

    for(int i = n; i >= position; i--){
        arr[i] = arr[i - 1];
    }
    arr[position] = element;
    n++;
    
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;


    

    
}