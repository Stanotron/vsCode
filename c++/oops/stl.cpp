#include <bits/stdc++.h>
using namespace std;
typedef pair<int,string> pis;
void printmap(map<int,string> &m){
    cout<<m.size()<<endl;
    for(auto &i : m){
        cout<<i.first<<"  "<<i.second<<endl;
    }
}
bool f(int x, int y)
{
    return x > y;
}
void vectordemo(){
    vector<int> a = {1, 35, 46, 2};
    cout << *--a.end() << endl;
    sort(a.begin(), a.end());
    bool p = binary_search(a.begin(), a.end(), 45);
    cout<< p;
    a.push_back(20);
    cout << endl;
    a.push_back(20);
    a.push_back(15);
    a.push_back(15);
    a.push_back(67);
    sort(a.begin(), a.end());
    for (int x : a)
    {
        cout << x << " ";
    }
    vector<int>::iterator it = lower_bound(a.begin(), a.end(), 0);
    vector<int>::iterator it2 = upper_bound(a.begin(), a.end(), 0);
    cout << endl;
    cout << *it << " " << *it2;
    cout << endl;
    cout << it2 - it << endl;
    sort(a.begin(), a.end(), f);
    for (int x : a)
    {
        cout << x << " ";
    }
}
// void setdemo(){
//     set<int> s = {23,12,3,19};
//     // for(int x : s){
//     //     cout<<x<<" ";
//     // }
//     for(auto x = s.begin(); x!= s.end(); x++){
//             long long it = *x, it2 = *(++x);
//             cout<<it<<" "<<it2;
//         }
//     auto f = s.upper_bound(12);
//     cout<<endl<<*f;
// }
int main(){
    vectordemo();}
//    setdemo();
//  pis p1 = {1,"abs"};
//  cout<<p1.first<<" " <<p1.second; 
//  vector<int> v;
//  int n;
//  cin>>n;
//  for(int i=0; i<n;i++){
//     int x;
//     cin>>x;
//     v.push_back(x);
//  }
//  for(int i=0; i<v.size();i++){
//     cout<<v[i]<<" ";
//  }
// vector<pair<int,int>> vpii;
// int x,a,b;
// cin>>x;
// for (int i = 0; i < x; i++)
// {   cin>>a>>b;
//     vpii.push_back({a,b});
// }
// for (int i = 0; i < vpii.size(); i++)
// {
//     cout<<vpii[i].first<<", "<<vpii[i].second<<endl;
// }
//  vector<vector<int>> v;
//  int n;
//  cin>>n;
//  for (int i = 0; i < n; i++)
//  {  int b;
//     cin>>b;
//     vector<int> temp;
//     for (int j = 0; j < b; j++)
//     {
//         int x;
//         cin>>x;
//         temp.push_back(x);
//     }
//     v.push_back(temp);
// }
// for (int i = 0; i < v.size(); i++)
// {
//     vector<int> temp;
//     temp = v[i];
//     for (int j = 0; j < temp.size(); j++)
//     {
//         cout<<temp[j]<<" ";   
//     }
//     cout<<endl;
// }
// vector<pair<int,int>> vpii = {{1,2},{3,4},{5,6}};
// for(auto &x : vpii){
//     cout<<x.first<<" "<<x.second<<endl;
// }
// map<int,string> mis;
// mis[1] = "abc";
// mis[4] = "fef"; 
// mis[2] = "sui";
// cout<<mis[1]; 
// printmap(mis);
// auto it = mis.find(4);
// if(it == mis.end()){
//     cout<<"no val";
// }
// else{
//     cout<<(*it).first<<"  "<<(*it).second<<endl;
// }
// map<string,int> msi;
// int n;
// cin>>n;
// for (int i = 0; i < n; i++)
// {
//     string s;
//     cin>>s;
//     msi[s] = msi[s]+1; 
// }
// for(auto &i : msi){
//     cout<<i.first<<"  "<<i.second<<endl;
// }
// unordered_map<string,int> msi;
// int n;
// cin>>n;
// for (int i = 0; i < n; i++)
// {
//     string s;
//     cin>>s;
//     msi[s] = msi[s]+1; 
// }
// for(auto &i : msi){
//     cout<<i.first<<"  "<<i.second<<endl;
// } 
// set<string> s;
// int n;
// cin>>n;
// for (int i = 0; i < n; i++)
// {
//     string f;
//     cin>>f;
//     s.insert(f);
// }
// for(string value : s){
//     cout<<value<<endl;
// }
// int t,n,k;
// cin>>t;
// while(t--){
// cin>>n>>k;
// multiset<long long> mi;
// for (int i = 0; i < n; i++){
//     long c;
//     cin>>c;
//     mi.insert(c);
// }
// long total = 0; 
// for (int i = 0; i < k; i++){
//     auto candy  = (--mi.end()); 
//     total  = total + (*candy);
//     long add = (*candy)/2;
//     mi.insert(add); 
//     mi.erase(candy);
// }
// cout<<total;
// }  
// #include <bits/stdc++.h>using namespace std;int main() {int t;cin >>t; while(t--){int n,m;cin>>n>>m;unordered_set<long long int> s;int count=0;for(int i=0;i<(n+m);i++ ){long long int a;cin>>a;if(count>=n){auto it=s.find(a);if(it!=s.end()){cout <<"YES"<<endl;}else{cout <<"NO" <<endl;}}s.insert(a);count++;}}} 
// return 0;
// }

