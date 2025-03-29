#include<iostream>
#include<string>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;
vector<vector<string>> group_anagram(vector<string>& s){
    int n = s.size();

    unordered_map<string, vector<string>> mp;

    for(int i = 0; i < n; i++){
        string word = s[i];
        sort(word.begin(), word.end());
        mp[word].push_back(s[i]);
    }
    vector<vector<string>> ans;

    for(auto x : mp){
        ans.push_back(x.second);
    }
    return ans;
}
int main(){
    int n;
    cout<<"enter the size of vector: ";
    cin>>n;
    
    vector<string> s;

    for(int i = 0; i < n; i++){
        string x;
        cin>>x;
        s.push_back(x);
    }
    vector<vector<string>> ans = group_anagram(s);
    for(int i = 0; i < ans.size(); i++){
        for(int j =0; j < ans[i].size(); j++){
            cout<<ans[i][j]<<" ";
        }
    }
}
