#include <bits/stdc++.h>
    
#define fr(i,a,b) for(int i = a; i < b; i++)
#define pb push_back
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
    
using namespace std;
int main()
{
    fast_io;
        ll n,x,y,sum=0,c=0;
        cin>>n>>x;
        multimap<ll,ll> mll;
        fr(i,1,n+1){
            cin>>y;
            mll.insert({y,i});
        }
        auto itr = mll.begin();
        auto itr2 = mll.rbegin();
        while(c<=4){
            cout<<(*itr).second <<" "<< (*itr2).second<<endl;
            if((*itr).second == (*itr2).second) {
                cout<<"IMPOSSIBLE";
                return 0;
            }
            sum = (*itr).first + (*itr2).first ;
            cout<<sum<<endl;
            if(sum>x) itr2 = --itr2;
            else itr = ++itr;
            c++;  
        }    
        cout<<min((*itr).second,(*itr2).second)<<" "<<max((*itr).second,(*itr2).second);
    return 0;
}