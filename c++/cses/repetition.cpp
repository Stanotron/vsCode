#include <bits/stdc++.h>
    
#define fr(i,a,b) for(int i = a; i < b; i++)
#define pb push_back
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)

using namespace std;
int main()
{
    fast_io;
    ll t,gcount=1;
    t = 1;
    // cin>>t;
    while(t--){
        ll count=1;
        vector<char> vc;
        char a;
        while(cin>>a){
            vc.push_back(a);
        }
        fr(i,1,vc.size()){
            if (vc[i] == vc[i-1])
            {
                count+=1;
            }
            else count = 1;
            if(gcount<count){
                gcount=count;
            }
        }
        cout<<gcount;
    }
    return 0;
}