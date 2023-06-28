#include <bits/stdc++.h>
    
#define fr(i,a,b) for(int i = a; i < b; i++)
#define pb push_back
#define ll long long
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)

struct node{
    int val;
    node * next;
};

node * start = NULL;


int del(int k, node * head){
    if(head==NULL) return 0;

    
    node * temp =  head;
    node * temp1 = head;

    while(k--){
        temp1 = temp1->next;
        if(temp1==NULL && k>0) return 0;
    }
    

    while(temp1->next!=NULL){
        temp = temp->next;
        temp1 = temp1->next;
    }


}    

using namespace std;
int main()
{
    fast_io;
    ll t;
    t = 1;
    // cin>>t;
    while(t--){
        
    }
    return 0;
}