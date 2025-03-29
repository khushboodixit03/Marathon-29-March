#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int sliding(vector<int>& v){
     int n = v.size();
     int k;
     cout<<"enter the value of k: ";
     cin>>k;
     int sum = 0;
     for(int i = 0; i < k; i++){
        sum += v[i];
     }
     int maxsum = sum;
     int start = 0;
     int end = k-1;
     while(end < n){
        sum = sum + v[end+1] - v[start];
        maxsum = max(maxsum, sum);
        start++;
        end++;
     }
     return maxsum;
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
    cout<<sliding(v);
}