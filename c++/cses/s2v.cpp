#include <bits/stdc++.h>
    
#define fr(i,a,b) for(ll i = a; i < b; i++)
#define pb push_back
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
    
using namespace std;
int main()
{
    fast_io;
    ll t,n,target,x;
    t = 1;
    // cin>>t;
    while(t--){
        map<ll,vector<ll>> mvi;
        cin>>n>>target;
        fr(i,1,n+1){
            cin>>x;
            mvi[x].push_back(i);
        }
        for(auto y = mvi.begin(); y != mvi.end(); ++y){
            ll sum = 0, rem = 0;
            sum = sum +y->first;
            rem = target-sum;
            auto it = mvi.find(rem);
            if (rem == sum){
                if(y->second.size()>=2){
                    cout<<y->second[0]<<" "<<it->second[1];
                }
                else cout<<"IMPOSSIBLE";
                return 0;
            }
            else if(it!=mvi.end()){
                cout<<min(y->second[0],it->second[0])<<" "<<max(y->second[0],it->second[0]);
                return 0;
            }
        }
        cout<<"IMPOSSIBLE";
    }
}