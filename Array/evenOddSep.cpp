// write a program to shift all even numbers to the left and all odd numbers to the right of the array

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int even[n], odd[n];
    int eIndex = 0, oIndex = 0;

    for(int i = 0; i < n ; i++){
        if(arr[i] % 2 == 0){
            even[eIndex++] = arr[i];
        }
    
    }
    for(int i = 0; i < n ; i++){
        if(arr[i] % 2 != 0){
            odd[oIndex++] = arr[i];
        }
    
    }

    for(int i = 0; i < eIndex; i++){
        cout << even[i] << " ";
    }
    for (int i = 0; i < oIndex; i++){
        cout << odd[i] << " ";
    }
    cout << endl;
}