#include<iostream>
#include<vector>
using namespace std;
int buy(vector<int>& v){
    int n = v.size();
    int buy = v[0];
    int profit = 0;

    for(int i = 0; i < n; i++){
        if(v[i] < buy) buy = v[i];
        else if(v[i] - buy > profit) profit = v[i] - buy;
    }
    return profit;
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
    cout<<buy(v);
}