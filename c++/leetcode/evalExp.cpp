#include <bits/stdc++.h>
    
#define fr(i,a,b) for(int i = a; i < b; i++)
#define pb push_back
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
    
using namespace std;

int dp[151][151];

int solve(string & in, int i, int j, bool req){
    if(i>j) return 0;
    if(i==j){
        if(req==1 && in[i] =='T' ) return 1;
        else if(req==0 && in[i] =='F' ) return 1;
        else return 0;
    }

    if(dp[i][j]!=-1) return dp[i][j];
    
    int ans = 0;
    
    for(int k = i+1; k<j; k+2){
        int lt = solve(in, i, k-1, 1), lf = solve(in, i, k-1, 0), rt = solve(in, k+1, j, 1), rf = solve(in, k+1, j, 0);
        if(in[k]=='^'){
            if(req==1) ans += lt*rf + lf*rt; 
            else ans += lt*rt + lf*rf;
        }
        if(in[k]=='|'){
            if(req==1) ans += lt*rf + lf*rt + lt*rt; 
            else ans += lf*rf;
        }
        if(in[k]=='&'){
            if(req==1) ans += lt*rt; 
            else ans += lf*rt + lf*rf + lt*rf;
        }
    }
    
    return dp[i][j] = ans;
}

int evaluate(string & s){
    int size = s.length();
    return solve(s,0,size-1,1);
}

int main()
{
    fast_io;
    ll t;
    t = 2;
    // cin>>t;
    // while(t--){
    //     string in;
    //     getline(cin,in);
    //     memset(dp,-1,sizeof(dp));
    //     cout<<evaluate(in);   
    // }
    int o = 999;
    for(auto x : o){
        cout<<x<<" ";
    }
    return 0;
}



