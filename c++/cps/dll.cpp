#include <bits/stdc++.h>
    
#define fr(i,a,b) for(int i = a; i < b; i++)
#define pb push_back
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
    
using namespace std;

struct node{
    int data;
    node * next;
    node * previous;
};
node * start = NULL;

void insert(int d){
    node * temp = new node();
    temp->data = d;
    if(start==NULL){
        start= temp;
        start->previous = NULL;
        return;
    }
    node *t = start;
    while(t->next!=NULL){
        t = t->next;
    }
    t->next = temp;
    temp->previous = t;
}

void out(){
    node*p = start;
    while(p!=NULL){
        cout<<p->data<<"->";
        p=p->next;
    }
    cout<<endl;
    node * q = start;
    while(q->next!=NULL){
        q=q->next;
    }
    while(q!=NULL){
        cout<<q->data<<"->";
        q=q->previous;
    }
}

void size(){
    node * t = start;
    int d = 0;
    while(t!=NULL){
        t = t->next;
        d +=1;
    }
    cout<<endl<<d;
}

// void sort(int size){
//     int s = size;
//     node * temp = start;
//     fr(i,0,s){
//         fr(j,0,s){
//             if()
//         }
//     }
// }

int main()
{
    fast_io;
    ll t;
    t = 1;
    // cin>>t;
    while(t--){
        int n,d;
        cin>>n;
        fr(i,0,n){
            cin>>d;
            insert(d);
        }
        out();
        size();
    }
    return 0;
}