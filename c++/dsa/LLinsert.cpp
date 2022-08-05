//linked list with delete and insertion by position
#include <iostream>
using namespace std;
struct node{
    int data;
    node * next;
};
node * start = NULL;

void list(int d){
    node *temp = new node();
    temp->data = d;
    if(start==NULL){
        start = temp;
        return;
    }
    node *temp2 = start;
    while(temp2->next!=NULL) temp2=temp2->next;
    temp2->next=temp;
}

void display(){
    node *a = start;
    while(a!=NULL){
        cout<<a->data<<",";
        a = a->next;
    }
}

void insert(){
    int d,p;
    cout<<"\n";
    cin>>d>>p;
  node *temp = new node;
  temp->data = d;
  node *temp2 = start;
 for(int i=0;i<p-2;i++){
   temp2 = temp2->next;
 }
 temp->next = temp2->next;
 temp2->next = temp;
}

void del(){
    int a;
    cout<<endl;
    cin>>a;
    node *temp = start;
    for(int i=0;i<a-2;i++){
        temp = temp->next;
    }
    node *temp2 = temp->next;
    temp->next = temp2->next;
}

int main(){
    int i,n,d;
    cin>>n;
    for ( i = 0; i < n; i++)
    { cin>>d;
      list(d);
    }
    display();
    insert();
    display();
    del();
    display();
    return 0;
}