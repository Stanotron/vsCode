#include <bits/stdc++.h>
    
#define fr(i,a,b) for(int i = a; i < b; i++)
#define pb push_back
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
    
using namespace std;

class Solution {
public:
    vector<string> res;
    
    void dfs(vector<string> &digits, string &curr, int pos){
        if(curr.size()==digits.size()){
            res.push_back(curr);
            return;
        }
        string temp = digits[pos];
        for(auto x : temp){
            curr.push_back(x);
            dfs(digits,curr,pos+1);
            curr.pop_back();
        }
    }

    vector<string> letterCombinations(string digits) {
        if(digits.size()==0) return {};
        map<string,string> mis;
        mis["1"] = "abc";
        mis["3"] = "def";
        mis["4"] = "ghi";
        mis["5"] = "jkl";
        mis["6"] = "mno";
        mis["7"] = "pqrs";
        mis["8"] = "tuv";
        mis["9"] = "wxyz";
        vector<string> l;
        for(int i = 0; i<digits.size(); i++){
            l.push_back(mis[digits.substr(i,1)]);
        }
        string curr;
        dfs(l,curr,0);
        return res;
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