// write a program to find a pair of elements whose sum is equal to a given number.

#include <bits/stdc++.h>
using namespace std;

int main(){
    // Two sum 

    int n;
    cin >> n;

    int brr[100] = {0};
    int idex = 0;
    int arr[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int sum;
    cin >> sum;

    for(int i = 0; i < n; i++){
        for (int j = i+ 1; j <n; j++){
            if(arr[i] + arr[j] ==sum){
                brr[idex++] = arr[i];
                brr[idex++] = arr[j];
            }
        }
    }

    for (int i = 0; i < idex; i +=2){
        cout << "(" << brr[i]<<"," << brr[i + 1] << ")" << " ";
    }
    cout << endl;


}