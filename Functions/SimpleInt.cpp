#include <bits/stdc++.h>
using namespace std;

int SI (float p, float t, float r){
    int SIntrest = (p * r * t) / 100;
    return SIntrest;
}

int main(){
    int p, r, t;
    cout << "Enter the principle: ";
    cin >> p;
    
    cout << "Enter the rate : ";
    cin >> r;
    cout << "Enter the time: ";
    cin >> t;

    int intrest = SI(p,r,t);
    cout << "the intrest is: " << intrest;

}