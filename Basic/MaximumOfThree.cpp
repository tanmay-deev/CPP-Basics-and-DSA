#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num1, num2, num3;

    cin >> num1;
    cin >> num2;
    cin >> num3;

    if (num1 > num2 && num1 > num3)
    {
        cout << "The first nume is greatest";
    }else if(num2 > num3){
        cout <<"The second number is greatest";
    }else{
        cout << "The third number is greatest";
    }
}