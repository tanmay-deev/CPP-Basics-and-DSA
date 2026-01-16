#include <bits/stdc++.h>
using namespace std;

int main(){
    int num;

    cout << "Enter an number : ";
    cin >> num;

    for(int i = 1; i<=10; i++ ){
        cout << num << " x " << i << " = " << i * num << endl;
    }
}