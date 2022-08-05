#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    long long a,b,k,count = 0;
    cin>>n>>m>>k;
    vector<long long> mll;
    for(int i = 0; i<n; i++){
        cin>>a;
        mll.push_back(a);
    }
    for(int i = 0; i<m; i++){
        cin>>b; 
        for(auto h = mll.begin(); h!= mll.end(); ++h){
            if(b>=(*h)-k && b<=(*h)+k) {
                count++;
                mll.erase(h);
                break;
            }
        }
    }
    cout<<count;
    return 0;
}