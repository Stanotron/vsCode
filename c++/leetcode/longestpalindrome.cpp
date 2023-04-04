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
    if(size==1) return s;
    int max = 0,x=0,y=0;
    for(int i = 0; i<size+1; i++){
        for(int j=0; j<size+1; j++){
            if(i==0 || j==0) dp[i][j] = 0;
            else if(s[i-1]==a[j-1]){
                dp[i][j] = 1+dp[i-1][j-1];
            }
            else dp[i][j] = 0;
            if(dp[i][j]>max){
                x = i; y = j;
                max = dp[i][j];
            } 
        }
    }
    cout<<max<<endl;
    if(max==1){
        d.push_back(s[0]);
    } 
    else{
        while(x>0 && y>0){
            if(s[x-1]==a[y-1]){
                cout<<x<<" "<<y<<endl;
                d.push_back(s[x-1]);
                x--; y--;
            }
            else{
                if(dp[x-1][y]>dp[x][y-1]) x--;
                else y--;
            } 
        }
    }
    return d;
}

int main()
{
    fast_io;
    ll t;
    t = 2;
    // cin>>t;
    while(t--){
        string s;
        getline(cin,s);
        cout<<palindrome(s);
    }
    return 0;
}