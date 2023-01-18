#include <bits/stdc++.h>
    
#define fr(i,a,b) for(int i = a; i < b; i++)
#define pb push_back
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
    
using namespace std;

class Solution {
public:
    bool ispalindrome(string str){
        string x = str;
        reverse(x.begin(),x.end());
        return (x==str);
    }
    vector<vector<string>> vvi;
    void dfs(string s, int pos, vector<string> & res){
        if(pos==s.size()){
            vvi.push_back(res);
            return;
        } 
        string str;
        int size = 1;
        for(int i = pos; i<s.size();i++){
            str = s.substr(pos, size);
            if(ispalindrome(str)){
                res.push_back(str);
                dfs(s,pos+size,res);
                res.pop_back();
            }
            size++;
        }   
    }
    vector<vector<string>> partition(string s) {
        if(s.size()==1) return {{s}};
        vector<string> res;
        dfs(s,0,res);
        return vvi;
    }
};

int main()
{
    fast_io;
    ll t;
    t = 1;
    // cin>>t;
    while(t--){
        cout<<'a';
    }
    return 0;
}