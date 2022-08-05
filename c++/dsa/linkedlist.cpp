#include<iostream>
using namespace std;
struct node{
    int data;
    node* link;
};
node *start = NULL;
void push(int d){
    node *p1 = new node();
    p1->data = d;
    if(start == NULL) {
        start = p1;
        return;
    }
    node *p2 = start;
    while(p2->link!=NULL){
           p2 = p2->link;           
    }
    p2->link = p1;
}
void display(){
    while(start!=NULL){
        cout<<"->"<<start->data;
        start=start->link;
    }
}
int main()
{
    int n;cin>>n;
    int d;
    for (int i=0;i<n;i++) {
        cin>>d;
        push(d);
    }display();
	return 0;
}





//linked list with delete by value






#include <iostream>
using namespace std;
struct node {
    int data;
    node *next;
};
node *start=NULL;
void push(int d){
    node *temp= new node;
    temp->data=d;
    if(start==NULL){
        start=temp;
        return;
    }
    node *t = start;
    while(t->next!=NULL) t=t->next;
    t->next=temp;
}
void display() {
    cout<<"Linked List:";
    while(start!=NULL){
        cout<<"->"<<start->data;
        start = start->next;
    }
}
void del(){
    int ele;
    cin>>ele;
    node *p2 = new node();
    p2=start;
    node *p3 = new node();
    p3=start;
    while(p2->next!=NULL){
        if(p2->data==ele){
            while(p3->next!=p2)
              p3=p3->next;
              p3->next=p2->next;
        }
        p2=p2->next;
    }
}
int main()
{
    int n,i;
    cin>>n;
    int d;
    for(i=0;i<n;i++) {
        cin>>d;
        push(d);
    }
    del();
	return 0;
}




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






//  reverse by iteration method







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
void reverse(){
    cout<<endl;
    node *temp = start, *prev=NULL, *agla;

    while(temp!=NULL){
     agla  = temp->next;
     temp->next  = prev;
     prev=temp;
     temp=agla;
    }
    start=prev;

}


int main(){
    int i,n,d;
    cin>>n;
    for ( i = 0; i < n; i++)
    { cin>>d;
      list(d);
    }
    display();
    reverse();
    display();
    return 0;
}






//printing using recursion FORWARD AND REVERSE







#include <iostream>
using namespace std;
struct node{
    int data;
    node * next;
};
node * start;

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

void printforward(node *p){
     if(p==NULL)return;

    cout<<p->data<<",";
    printforward(p->next);
}

void printBACK(node *p){
     if(p==NULL)return;

    printBACK(p->next);
    cout<<p->data<<",";
}

int main(){
    start = NULL;
    int i,n,d;
    cin>>n;
    for ( i = 0; i < n; i++)
    { cin>>d;
      list(d);
    }
    printforward(start);
    cout<<endl;
    printBACK(start);
    return 0;
}






//reversing a list using recusrive method







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
void reverse(node *p){
    cout<<endl;
    if(p->next==NULL){
    start = p;
    return;
    }
    reverse(p->next);
    p->next->next = p;
    p->next = NULL;
}


int main(){
    int i,n,d;
    cin>>n;
    for ( i = 0; i < n; i++)
    { cin>>d;
      list(d);
    }
    display();
    reverse(start);
    display();
    return 0;
}



