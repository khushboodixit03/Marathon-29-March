#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>> transpose(vector<vector<int>>& v){
    int n = v.size();
    vector<vector<int>> temp(n,vector<int>(n)); 
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            temp[i][j] = v[j][i];
        }
    }
    return temp;
}
int main(){
    int n;
    cout<<"enter the size of vector: ";
    cin>>n;

    vector<vector<int>> v;

    for(int i = 0; i < n; i++){
        vector<int> temp; 

        for(int j = 0 ; j < n ; j++)
        {
            int x; 
            cin>>x;
            temp.push_back(x);
        }

        v.push_back(temp);
    }

     vector<vector<int>> ans = transpose(v);
     for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout<<ans[i][j]<<" ";

        }
     }
    
}