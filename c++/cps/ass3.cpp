// #include <bits/stdc++.h>
    
// #define fr(i,a,b) for(int i = a; i < b; i++)
// #define pb push_back
// #define ll long long
// #define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
    
// using namespace std;

// class Stack{

//     queue <int> h,p;

//     public:
//     void push(int x){
//         h.push(x);
//     }
//     void pop(){
//         if(h.size()==0){
//             return;
//         }
//         while(h.size()!=1){
//             p.push(h.front());
//             h.pop();
//         }
//         h.pop();
//         queue<int> q = h;
//         h = p;
//         p = q;
//     }
//     int top(){
//         if(h.size()==0){
//             return -1;
//         }
//         int x=0;
//         x = h.back();
//         return x;
//     }
// };

// int main()
// {
//     fast_io;
//     ll t;
//     t = 1;
//     // cin>>t;
//     while(t--){
//         Stack s;
//         s.push(10);
//         s.push(20);
//         s.push(30);
//         int y = s.top();
//         cout<<y<<endl;
//         s.pop();
//         cout<<s.top();
//     }
//     return 0;
// }



#include <bits/stdc++.h>
    
#define fr(i,a,b) for(int i = a; i < b; i++)
#define pb push_back
#define ll long long
// #define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
    
using namespace std;

void push1(int *a,int v,int x){
        a[x]=v;
}
void push2(int *a,int v,int x,int y){
        a[x+y]=v;
}
int main()
{
    // fast_io;
    ll t;
    t = 1;
    // cin>>t;
    int x,y,v;
    while(t--){
        cin>>x;
        cin>>y;
        int a[x+y],s1=x,s2=y;
        fr(i,0,x){
            cin>>v;
            push1(a,v,s1);
            s1--;
        }
        fr(i,0,y){
            cin>>v;
            push2(a,v,x,s2);
            s2++;
        }
        fr(i,0,x+y-1){
            cout<<a[i];
        }
    }
    return 0;
}