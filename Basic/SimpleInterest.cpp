#include <bits/stdc++.h>
using namespace std;


int main(){
    float principle, rate, time;

    cout << "Enter the Principle: " << endl;
    cin >> principle;

    cout << "Enter the rate: " << endl;
    cin >> rate;

    cout << "Enter the time: " << endl;
    cin >> time;

    float intrest = principle * rate * time / 100;

    cout << "Your simple interest is: " << intrest;
}