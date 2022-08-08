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
    // t = 1;
    cin>>t;
    while(t--){
        vector<vector<char>> vvc;
        int d = 5;
        char a;
        fr(i,1,4){
            vector<char> temp;
            fr(j,1,4){
                cin>>a;
                temp.push_back(a);
            }
            vvc.push_back(temp);
        }
        int x=0,y=0;
        while(d--){
            if(vvc[x+1][y]=='.' || vvc[x-1][y]=='.' || vvc[x+1][y+1]=='.' || vvc[x+1][y+1]=='.')
        }
        // fr(i,0,3){
        //     fr(j,0,3){
        //         cout<<vvc[i][j];
        //     }
        //     cout<<endl;
        // }
    }
    return 0;
}