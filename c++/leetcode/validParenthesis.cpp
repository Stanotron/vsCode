#include <bits/stdc++.h>
    
#define fr(i,a,b) for(int i = a; i < b; i++)
#define pb push_back
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> sc;
        if(s[0]==')' || s[0]=='}' || s[0]==']') return false;
        for(auto x : s){
            if(x=='(' || x=='{' || x=='[') sc.push(x);
            else if (x==')' && sc.top()!='(') return false;
            else sc.pop();
        }
        return sc.empty();
    }
};

int main()
{
    fast_io;
    ll t;
    t = 1;
    // cin>>t;
    while(t--){
        Solution S;
        string s;
        getline(cin,s);
        bool out = S.isValid(s);
        cout<<out;
    }
    return 0;
}