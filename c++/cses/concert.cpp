#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<long long> p;
    long long j;
    for (int i = 0; i < n; i++){
        cin>>j;   
        p.push_back(-j);
    }
    sort(p.begin(), p.end()); 
    // vector<long long>::iterator low1;
    // for(int i = 0 ; i< m; i++){
    //     cin>>j;
    //     if(p.empty()){
    //         cout<<"-1"<<endl;
    //         break;
    //     }
    //     low1 = lower_bound(p.begin(), p.end(), -j);
    //     if((*low1)>=(-j)){
    //         cout<<abs(*low1)<<endl;
    //         p.erase(low1);
    //     }
    //     else cout<<"-1"<<endl;
    // }
    bool y = false;
    for(int i = 0 ; i< m; i++){
        cin>>j;
        if(p.empty()){
            cout<<"-1"<<endl;
            break;
        }
        for(auto x = p.begin(); x!= p.end(); ++x){
            if(*x>=-j){
                cout<<abs(*x)<<endl;
                p.erase(x);
                y = false;
                break;
            }
            else y = true;
        }
        if(y) cout<<"-1"<<endl;
    }
    return 0;
}