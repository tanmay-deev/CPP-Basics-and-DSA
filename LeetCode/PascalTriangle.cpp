// pascal's triangle using stl
//              1
        //     1 1
        //    1 2 1
        //   1 3 3 1

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; 
    cin >> n;
    vector<vector<int>> ans;

    if(n == 1){
        ans.push_back({1});
        for(int k = 0; k < ans.size(); k++){
        for(int i = 0; i < ans[k].size(); i++){
            cout << ans[k][i] << " ";
        }
        cout << endl;
    }
    }if(n == 2){
        ans.push_back({1});
        ans.push_back({1,1});
        for(int k = 0; k < ans.size(); k++){
        for(int i = 0; i < ans[k].size(); i++){
            cout << ans[k][i] << " ";
        }
        cout << endl;
    }
    }
    else{
        ans.push_back({1});
        ans.push_back({1,1});
        for(int i = 3; i <= n; i++){
        vector<int> temp;
        temp.push_back(1);

        vector<int> last = ans[ans.size() - 1];

        for(int j = 0; j < last.size() - 1; j++){
            temp.push_back(last[j] + last[j + 1]);
        }

        temp.push_back(1);
        ans.push_back(temp);
    }
    for(int k = 0; k < ans.size(); k++){
        for(int i = 0; i < ans[k].size(); i++){
            cout << ans[k][i] << " ";
        }
        cout << endl;
    }
    }
    

    
    
}

