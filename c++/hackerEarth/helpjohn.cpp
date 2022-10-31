#include <bits/stdc++.h>
    
#define fr(i,a,b) for(int i = a; i < b; i++)
#define pb push_back
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
    
using namespace std;
int main()
{
    fast_io;
    ll n, x;
    set<int> vi;
    cin>>n;
    while(n--){
        cin>>x;
        vi.insert(x);
        if(x==*vi.begin()) cout<<"-1 ";
        else cout<<*--vi.lower_bound(x)<<" ";
        if(x == *vi.rbegin()) cout<<"-1";
        else cout<<*vi.upper_bound(x);
        cout<<endl;
    }
    return 0;
}