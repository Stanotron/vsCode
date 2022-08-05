#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        long long x,y,val;
        cin>>y>>x;
        if(y>=x){
            if(y%2==0) val = (y*y)-(x-1);
            else{
                val = (y-1)*(y-1)+x;
            }
        }
        if(y<x){
            if(x%2!=0) val = (x*x)-(y-1);
            else{
                val = (x-1)*(x-1)+y;
            }
        }
        cout<<val<<endl;
    }
    return 0;
}