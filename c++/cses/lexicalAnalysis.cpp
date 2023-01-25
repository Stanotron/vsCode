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
    set<string> si {
    "for","while","do","int","string","char","long","long","vector","set","map","if","else","float"};
    int keys = 0, identifier = 0;
    string temp ; 
    // cin>>t;
    while(t--){
        string in = "for(int i = 1; i < 10; i++)";
        for(auto x : in){
            if((int(x)>64 && int(x)<91) || (int(x)>96 && int(x)<123)){
                temp.push_back(x);
            }
            else{
                if(temp.empty()) continue;
                if(si.find(temp)==si.end()) identifier++;
                else keys++;
                temp.clear(); 
            }
        }
    }
    bool a ;
    cout<<a;
    // cout<<keys<<" "<<identifier;
    return 0;
}