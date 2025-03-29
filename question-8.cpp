#include<iostream>
#include<string>
#include<algorithm>
#include<climits>
using namespace std;
bool palindrome(string s){
    int n = s.length();
    string t = s;
    reverse(t.begin(), t.end());
    if(s == t) return true;
    else return false;

}
int main(){
    string s;
    cin>>s;
    cout<<palindrome(s);
}