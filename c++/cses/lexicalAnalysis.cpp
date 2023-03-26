#include <bits/stdc++.h>
    
#define fr(i,a,b) for(int i = a; i < b; i++)
#define pb push_back
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)

using namespace std;
//A->Aa/b
//A->bA'
//A'->aA'/E
vector<string> seperate(string in){
    vector<string> vs;
    string temp;
    for(int i = 3; i<in.size(); i++){
        if(in[i]!='/'){
            temp.push_back(in[i]);
        }
        else{
            vs.push_back(temp);
            temp.clear();
        } 
    }
    vs.push_back(temp);
    return vs;
}
void leftrecursion(string in){ 
    char extra  = 'Q' ;
    if(in[0]==in[3]){
        vector<string> vs = seperate(in);
        for(int it = 1; it<vs.size(); it++){
            vs[it].push_back(extra);
        }
        string out = vs[0].substr(1,vs[0].size()-1);
        out.push_back(extra);
        cout<<in[0]<<"->";
        for(int it = 1; it<vs.size(); it++){
            cout<<vs[it]<<"/";
        }
        cout<<endl;
        cout<<extra<<"->";
        cout<<out<<"/E";
    }
    else return;
}

int main()
{
    fast_io;
    ll t;
    t = 1;
    set<string> si {
    "for","while","do","int","string","char","long","long","vector","set","map","if","else","float"};
    int keys = 0, identifier = 0;
    string temp ; 
    // cin>>t;
    while(t--){
        string in;
        getline(cin,in);
        leftrecursion(in);
        // string in = "for(int i = 1; i < 10; i++)";
        // for(auto x : in){
        //     if((int(x)>64 && int(x)<91) || (int(x)>96 && int(x)<123)){
        //         temp.push_back(x);
        //     }
        //     else{
        //         if(temp.empty()) continue;
        //         if(si.find(temp)==si.end()) identifier++;
        //         else keys++;
        //         temp.clear(); 
        //     }
        // }
    }
    // cout<<keys<<" "<<identifier;
    return 0;
}