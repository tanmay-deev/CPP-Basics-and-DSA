#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;

    cout << "Enter your lottery number: " << endl;
    cin >> n;

    if(n >= 300 && n <=460){
        cout << "You have won a macbook!" << endl;
        if (n >= 300 && n <= 380)
        {
            cout << "Model: M1 Mac";
        }else if (n >= 381 && n <= 460)
        {
            cout << "Model: M2 Mac";
        }
        
    }else if (n >= 200 && n <= 280)
    {
        cout << "You have won Kurkure!" << endl;
        if (n >= 200 && n <= 240)
        {
            cout << "Flavor: Chill";
        }else if (n >= 241 && n <= 280){
            cout << "Flavor: Onion";
        }
    }
    else if (n >= 1100 && n <= 1500)
    {
        cout << "You have won a Cycle" << endl;
        if (n >= 1100 && n <= 1300)
        {
            cout << "Type: Avon Cycle";
        }else if (n >= 1301 && n <= 1500){
            cout << "Type: Hero Cycle";
        }
    }else if (n >= 50 && n <= 80)
    {
        cout << "You have won a Bike!" << endl;
        if (n >= 50 && n <= 60)
        {
            cout << "Brand: Yamaha";
        }else if (n >= 61 && n <= 80){
            cout << "Brand: Honda";
        }
    }
    else{
        cout << "Better luck next time!" << endl;
    }
}