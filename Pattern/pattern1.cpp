#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++){
            cout << " * ";
        }
        cout << endl;
    }

    int x;
    cin >> x;
    int i = 0;
    int j = 0;

    while (i < x)
    {
        j = 0;
        while (j < x)
        {
           cout << " * ";
           j++;
        }
        i++;
        cout << endl;
    }
    
    
    
}