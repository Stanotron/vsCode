#include <bits/stdc++.h>
using namespace std;

#define fr(i,a,b) for(int i = a; i < b; i++)
#define pb push_back
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)

struct node{
    int data;
    node* next;
};

node* start = NULL;

void insert(int val){
    node* t = new node();
    t->data = val;
    if(start==NULL){
        start = t;
        return;
    }
    node* temp = start;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = t;

}

void display(){
    node * temp = start;
    while(temp!=NULL){
        cout<<"->"<<temp->data;
        temp=temp->next;
    }
}

void invert(){
    node* t = start;
    node *t2 = start;
    while(t->next->next!=NULL){
        t = t->next;
    }
    start = t->next;
    t->next = NULL;
    start->next = t2;
    cout<<endl;
    display();
}

void checkpalindrome(){
    stack <int> s;
    int x=1;
    node *t,*t2 = start;
    while(t!=NULL){
        s.push(t->data);
        t = t->next;
    }
    while(s.empty()){
        int x = s.top();
        if(x==t2->data){
            s.pop();
            t2 = t2->next;
        }
    }
    if(s.empty()) cout<<"true";
    else cout<<"false";
}

using namespace std;
int main()
{
    fast_io;
    ll t;
    t = 1;
    // cin>>t;
    while(t--){
        int x,y;
        cin>>x;
        fr(i,0,x){
            cin>>y;
            insert(y);
        }
    }
    // display();
    // invert();
    checkpalindrome();
    return 0;
}