// write a progtram to find the majority element in the array (an element that appears more than n/2 times)

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >>n;

    int brr[100];
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int idex = 0;
    int count = 0;

    for(int i = 0; i < n; i++){
        int count = 0;
        for(int j = 0; j < n; j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }
        if(count > n / 2){
            brr[idex++] = arr[i];
        }
    }

    for(int i = 0; i < idex; i++){
        cout << brr[i] << " ";
    }
    cout << endl;
}