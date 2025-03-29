#include<iostream>
#include<string>
#include<vector>
#include<sstream>
#include<algorithm>
using namespace std;
string blue(string s){
    int n = s.length();
    stringstream ss(s);
    string word; 
    vector<string> v;

    while(ss >> word)
    {
        v.push_back(word);
    }

    reverse(v.begin(),v.end());

    string ans; 

    for(int i = 0 ; i < v.size() ; i++)
    {
        ans += v[i];
        ans = ans + " ";
    }

    return ans;

}
int main(){
    string s;
    cout<<"enter string: ";
    getline(cin,s);

    cout<<blue(s);

    
}