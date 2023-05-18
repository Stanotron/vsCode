#include <bits/stdc++.h>
    
#define fr(i,a,b) for(int i = a; i < b; i++)
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
        string in;
        cin>>in;
        for (int i = 0; i < in.size(); i++)
        {
            if(in[i]!='a'){
                cout<<in[i];
                cout<<i<<endl;
            }

        } 
        
    }
    return 0;
}