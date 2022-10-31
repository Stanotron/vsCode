#include <bits/stdc++.h>using namespace std;int main() {int t;cin >>t; while(t--){int n,m;cin>>n>>m;unordered_set<long long int> s;int count=0;for(int i=0;i<(n+m);i++ ){long long int a;cin>>a;if(count>=n){auto it=s.find(a);if(it!=s.end()){cout <<"YES"<<endl;}else{cout <<"NO" <<endl;}}s.insert(a);count++;}}} 
// return 0;
// }