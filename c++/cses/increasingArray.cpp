#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long x,m=0;
    vector<long long> vll;
    for (int i = 0; i < n; i++)
    {
        cin>>x;
        vll.push_back(x);
    }
    for(auto v = 1+vll.begin(); v!= vll.end(); ++v){
        // cout<<*v<<" "<<*(v-1)<<endl;
        if(*v<*(v-1)){
            //  cout<<*v<<" "<<*(v-1)<<endl;
            m = m+(*(v-1)-*v);
             *v = *(v-1);
            //  cout<<m<<endl;
        }
    }
    cout<<m;
    return 0;
}