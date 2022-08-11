#include <bits/stdc++.h>
    
#define fr(i,a,b) for(long double i = a; i < b; i++)
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
        map<long double,ll> mll;
        ll n;
        cin>>n;
        while(n--){
            long double a,b;
            cin>>a>>b;
            fr(i,a+0.5,b){
                mll[i] = mll[i]+1;
            }
        }
        auto pr = max_element(mll.begin(), mll.end(), [](const auto &x, const auto &y) {
                    return x.second < y.second;
                });
        cout<<pr->second;
    }
    return 0;
}