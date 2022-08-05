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