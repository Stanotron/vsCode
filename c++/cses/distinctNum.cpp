#include <bits/stdc++.h>
using namespace std;
int main(){   
    long long x;
    cin>>x;
    set<long long> si;
    for (long long i = 0; i < x; i++){   
        int y;
        cin>>y;
        si.insert(y);
    }
    cout<<si.size();

    return 0;
}