#include <bits/stdc++.h>
    
#define fr(i,a,b) for(int i = a; i < b; i++)
#define pb push_back
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
    
using namespace std;

int solve(vector<int> vi, int i, int j){
    if(i>=j) return 0;
    int ans = INT16_MAX;
    for(int k = i; k<j; k++){
        int tempans = solve(vi,i,k) + solve(vi,k+1,j) + vi[i-1]*vi[k]*vi[j];
        if(tempans<ans) ans = tempans;
    }
    return ans;
}

int main()
{
    fast_io;
    ll t;
    t = 1;
    // cin>>t;
    while(t--){
        vector<int> vi {40,20,30,10,30};
        cout<<solve(vi,1,vi.size()-1);
    }
    return 0;
}