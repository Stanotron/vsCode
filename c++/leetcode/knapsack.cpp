#include <bits/stdc++.h>
    
#define fr(i,a,b) for(int i = a; i < b; i++)
#define pb push_back
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
    
using namespace std;

int dp[101][1002];

int knapsack(vector<int> & wt, vector<int> & val , int w, int n ){
    if(n==0 || w==0 ) return 0;
    
    if(dp[n][w]!=-1) return dp[n][w];
    
    if(wt[n-1] <= w){
        return dp[n][w] = max((val[n-1] + knapsack(wt,val,w-wt[n-1],n-1)), knapsack(wt,val,w,n-1));
    }
    
    else if(wt[n-1]>w) return dp[n][w] = knapsack(wt,val,w,n-1);
}

int main()
{
    fast_io;
    ll t;
    t = 2;
    // cin>>t;
    memset(dp,-1,sizeof(dp));
    while(t--){
        vector<int> wt {10,20,30}, val{60,100,120};
        int w = 50;
        int out = knapsack(wt,val,w,3);
        cout<<out;
    }
    return 0;
}