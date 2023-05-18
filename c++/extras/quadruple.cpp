#include <bits/stdc++.h>

#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
    
using namespace std;

vector<string> address = {"t1","t2","t3","t4","t5"};
vector<char> op;
vector<string> arg1,arg2,result;

string threeADC (string &in, int current, vector<string> &out){
    string temp,lastaddr;
    int flag = 1;
    int insize = in.size();
    
    temp.append(address[current]);
    temp.push_back('=');
    current++;

    for(int i = 0; i<insize; i++){
        if(!lastaddr.empty()){
            temp.append(lastaddr);
            lastaddr.clear();
        }
        if(in[i]=='+' || in[i]=='-' ||in[i]=='*' ||in[i]=='/'){
            if(flag==1){
                temp.push_back(in[i]);
                flag = 0;
            }
            else{
                out.push_back(temp);
                lastaddr = temp.substr(0,2);
                temp.clear();
                temp.append(address[current]);
                temp.push_back('=');
                current++;
                i-=1;
                flag = 1;
            }
        }
        else{
            temp.push_back(in[i]);
        }
    }
    out.push_back(temp);
    lastaddr =  temp.substr(0,2);
    return lastaddr;
}

void processadc(vector<string> &out){
    for(auto x : out){
        string a1, a2;
        int size = x.size();
        int equals = x.find("=");
        string temp = x.substr(equals+1); int tsize = temp.size();
        for(int i = 0; i<tsize; i++){
            if(temp[i]=='+' || temp[i]=='-' || temp[i]=='*' || temp[i]=='/'){
                op.push_back(temp[i]);
                a1 = temp.substr(0,i);
                a2 = temp.substr(i+1,tsize-1);
                break;
            }
            if(i==tsize-1){
                op.push_back('=');
                a1 = temp;
            } 
        }
        arg1.push_back(a1);
        arg2.push_back(a2);
        result.push_back(x.substr(0,equals));
    }
}

void quadruple(){
    int size = op.size();
    for(int i = 0; i<size; i++){
        cout<<"# : "<<i<<endl;
        cout<<"op : "<<op[i]<<endl;
        cout<<"arg1 : "<<arg1[i]<<endl;
        cout<<"arg2 : "<<arg2[i]<<endl;
        cout<<"result : "<<result[i]<<endl;
        cout<<endl;
    }
}

void triple(){
    int size = op.size();
    for(int i = 0; i<size; i++){
        cout<<"# : "<<i<<endl;
        cout<<"op : "<<op[i]<<endl;
        if(i>0 && arg1[i]==result[i-1]){
            cout<<"arg1 : "<<i-1<<endl;
        }
        else cout<<"arg1 : "<<arg1[i]<<endl; 
        if(arg2[i].size()==0) cout<<"arg2 : "<<result[i]<<endl; 
        else cout<<"arg2 : "<<arg2[i]<<endl;
        cout<<endl;
    }
}

void indirecttriple(){
    int size = op.size();
    for(int i = 0; i<size; i++){
        cout<<i<<" - "<<i+100<<endl;
    }
    cout<<endl;
    for(int i = 0; i<size; i++){
        cout<<"# : "<<i+100<<endl;
        cout<<"op : "<<op[i]<<endl;
        if(i>0 && arg1[i]==result[i-1]){
            cout<<"arg1 : "<<i-1+100<<endl;
        }
        else cout<<"arg1 : "<<arg1[i]<<endl; 
        if(arg2[i].size()==0) cout<<"arg2 : "<<result[i]<<endl; 
        else cout<<"arg2 : "<<arg2[i]<<endl;
        cout<<endl;
    }
}

int main()
{
    fast_io;
    ll t;
    t = 1;
    // cin>>t;
    while(t--){
        string in;
        cin>>in;
        int equals = in.find("="), current = 0;
        string temp = in.substr(equals+1);
        vector<string> out;
        string lastaddr = threeADC(temp,current,out);
        temp = string(1,in[0])+'=';
        temp.append(lastaddr);
        out.push_back(temp);
        for(auto x : out){
            cout<<x<<endl;
        }
        processadc(out);
        quadruple();
        triple();
        indirecttriple();
    }
    return 0;
}