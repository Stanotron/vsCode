#include <bits/stdc++.h>
    
#define fr(i,a,b) for(int i = a; i < b; i++)
#define pb push_back
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
    
using namespace std;

string palindrome(string s){
    string a = s,d;
    reverse(a.begin(), a.end());
    int size = s.length(), dp[size+1][size+1];
    int max = 0,x=0,y=0;
    fr(i,0,size+1){
        fr(j,0,size+1){
            if(i==0 || j==0) dp[i][j] = 0;

            else if(s[i-1]==a[j-1]){
                dp[i][j] = 1+dp[i-1][j-1];
            }

            else dp[i][j] = 0;

            if(dp[i][j]>max){
                x = i;
                y = j;
                max = dp[i][j];
            } 
        }
    }
    while(x>=0 && y>=0){
        if(dp[x][y]==1+dp[x-1][y-1]){
            d.push_back(s[x]);
            x-=1;
            y-=1;
        } 
        else if(dp[x-1][y]>=dp[x][y-1]) x -=1;
        
        else y-=1;
    }
    return d;
}

int main()
{
    fast_io;
    ll t;
    t = 1;
    // cin>>t;
    while(t--){
        string s;
        getline(cin,s);
        cout<<palindrome(s);
    }
    return 0;
}