#include <bits/stdc++.h>
using namespace std;
int main()
{   char a;
    map<char,int> mci;
    while(cin>>a){
        
        mci[a] = mci[a]+1;
    }
    for(auto x: mci){
        cout<<x.first<<" "<<x.second<<endl;
    }
    return 0;
}