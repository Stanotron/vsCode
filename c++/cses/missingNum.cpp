#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n;
    set<int> si;
    for (int i = 0; i < n-1; i++)
    {    cin>>m;
        si.insert(m);
    }
    if(*si.begin()!=1){
        cout<<1;
        return 0;
        }
    else if(*(--si.end())!=n){
        cout<<n;
        return 0;
    }
    int b = 1;
    for(auto c = si.begin(); c!= si.end(); ++c){
        if((*c)==b){
            b++;
        }
        else{
            cout<<b;
            return 0;
        }
    }
    return 0;
}