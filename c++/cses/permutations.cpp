#include <bits/stdc++.h>

#define for(i,a,b) for(int i = a; i <= b; i+=2)
#define pb push_back
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)

using namespace std;
int main()
{
    fast_io;
    ll t;
    t = 1;
    // cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n==2 || n==3) {cout<<"NO SOLUTION";
        break;}
        if(n==4) {cout<<"2 4 1 3";
        break;}
        for(i,1,n){
            cout<<i<<" ";
        }
        for(i,2,n) cout<<i<<" ";
    }
    return 0;
}

