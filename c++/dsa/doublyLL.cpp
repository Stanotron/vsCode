#include <iostream>
using namespace std;
struct node{
    int data;
    node *next;
    node *prev;
};
node *head = NULL;
void insert (int d){
    node * temp = new node();
    temp->data = d;
    if(head==NULL){
        head = temp;
        temp->prev = NULL;
        return;
    }
    node *p = head;
    while(p->next != NULL)
    p = p->next;
    p->next = temp;
    temp->prev = p; 
}

void display(){
    node *p = head;
    while(p!=NULL){
        cout<<p->data<<",";
        p=p->next;
    }
    cout<<endl;
    node * q = head;
    while(q->next!=NULL){
        q=q->next;
    }
    while(q!=NULL){
        cout<<q->data<<",";
        q=q->prev;
    }
}

int main(){
    int i,n,d;
    cin>>n;
    for ( i = 0; i < n; i++)
    {
        cin>>d;
        insert(d);
    }
    display();
    return 0;
}

