#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> v(n);
    vector<vector <int>> ans;
    int maxi = INT_MIN;
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    for(int i = 0; i < n; i++){
        vector<int> temp;
        int sum = 0;
        for(int j = i; j < n; j++){
            sum += v[j];
            maxi = max(maxi, sum);
            temp.push_back(v[j]);
            ans.push_back(temp);
        }
    }

    int curr_sum = 0;
     for(int i = 0; i <= 0; i++){
        curr_sum += v[i];
        maxi = max(maxi, curr_sum);
        if(curr_sum < 0){
            curr_sum = 0;
        }
    }
    for(int i = 0; i < ans.size(); i++){
        for(int j = 0; j < ans[i].size(); j++){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

   
    cout << endl;
    cout << "The maximum of the array is: " << maxi;
}