#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> prefix(vector<int>& v){
    int n = v.size();
    vector<int> pre(n);
    pre[0] = 1;
    for(int i = 1; i < n; i++){
        pre[i] = pre[i-1] * v[i-1];
    }
    vector<int> suff(n);
    suff[n-1] = 1;
    for(int i = n-2; i >= 0; i--){
        suff[i] = suff[i+1] * v[i+1];
    }
    vector<int> ans(n);
    for(int i = 0; i < n; i++){
        ans[i] = pre[i] * suff[i];
    }
    return ans;


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
    vector<int> ans = prefix(v);
    for(int i = 0; i < n; i++){
        cout<<ans[i]<<" ";
    }
}
