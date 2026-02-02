// taking n input and pritning them 
#include <iostream>
#include <vector>
using namespace std;
int main(){
    int num;
    cin>>num;
    cout<<"Enter "<<num<<" pairs of integers:"<<endl;
    vector<pair<int,int>> vec(num);
    for(int i=0;i<vec.size();i++){
        cout<<"Pair "<<i+1<<": ";
        int first,second;
        cin>>first>>second;
        // vec.push_back(make_pair(first,second));
        vec[i]=make_pair(first,second);
    }
    cout << "The pairs are: " << endl;
    for (auto p : vec)
    {
        cout << p.first << " " << p.second << endl;
    }
}