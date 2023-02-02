#include <bits/stdc++.h>
    
#define fr(i,a,b) for(int i = a; i < b; i++)
#define pb push_back
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
    
using namespace std;

class Solution {
public:
    int ladderLength(string beginword, string endword, vector<string>& wordlist) {
        if(find(wordlist.begin(),wordlist.end(),endword)==wordlist.end()) return 0;
        queue<pair<int,string>> q; set<string> s;
        for(auto c : wordlist) s.insert(c);
        q.push({1,beginword}); 
        while(!q.empty()){
            string t = q.front().second; int sol = q.front().first;  
            q.pop();
            for(int i = 0; i<t.size(); i++){
                char temp = t[i];
                for(char c = 'a'; c<='z'; c++){
                    t[i] = c;
                    auto rem = s.find(t); 
                    if(t==endword) return sol+1;
                    else if(rem != s.end()){
                        // cout<<" inserted"<<t<<" ";
                        s.erase(*rem);
                        q.push({sol+1,t});
                    } 
                }
                t[i] = temp;
            }
        }
        return 0;
    }
};

int main()
{
    fast_io;
    ll t;
    t = 1;
    vector<vector<char>> v {
      {'1','1','1','1','0'},
      {'1','1','0','1','0'},
      {'1','1','0','0','0'},
      {'0','0','0','0','0'}
    };
    // cin>>t;
    while(t--){
        Solution sol;
    }
    return 0;
}
