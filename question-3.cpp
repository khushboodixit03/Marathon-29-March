#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;
int majority(vector<int>& v){
    int n = v.size();
    unordered_map<int, int> mp;
    for(int i = 0; i < n; i++){
        mp[v[i]]++;
    }

    int maxi = n/2;

    for(auto x : mp){
        if(x.second > maxi)
        return x.first;
    }
}
int main(){
    int n;
    cout<<"enter the size of vector: ";
    cin>>n;

    vector<int> v;
    for(int i = 0; i < n; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
   cout<<majority(v);
}