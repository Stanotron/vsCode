#include <bits/stdc++.h>

#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
    
using namespace std;

bool srp (string &in, vector<pair<char,char>> &terminals, vector<string> &rules){
    int inpsize = in.size();
    string stack;
    stack.push_back('$');
    for(int i = 0; i<inpsize; i++){
        char cur = in[i];
        if(cur>='a' && cur<='z'){
            for(auto x : terminals){
                if(cur==x.second){
                    stack.push_back(x.first);
                }
            }
        }
        else{
            stack.push_back(cur);
        }
        cout<<stack<<endl;
        for(auto r : rules){
            int rulesize = r.size(), stacksize = stack.size()-1,count = 0;
            if(rulesize-3<=stacksize && rulesize-3>1){
                int t = stacksize;
                for(int a = 3; a<rulesize; a++){
                    if(r[a]==stack[t]){
                        count++;
                        t--;
                    }
                }
                if(count==(rulesize-3)){
                    stack.resize(stacksize+1-count);
                    stack.push_back(r[0]);
                    cout<<stack<<endl;
                }
            }
        }
    }
    return stack.size()==2;
}

int main()
{
    fast_io;
    ll t;
    t = 1;
    // cin>>t;
    while(t--){
        vector<pair<char,char>> terminals; int pos = -1;
        vector<string> vvs {"E->E+E", "E->E*E" , "E->d"};
        for (auto x : vvs){
            for(int i = 0; i<x.size(); i++){
                if(x[i]>='a' && x[i]<='z'){
                    terminals.push_back(make_pair(x[0],x[i]));
                } 
            }
        }
        string input;
        cin>>input;
        if(srp(input,terminals,vvs)) cout<<"string is parsed successfully";
        else cout<<"string cannot be parsed";
    }
    return 0;
}