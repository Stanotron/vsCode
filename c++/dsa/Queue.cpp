// queue using linked lists

#include<iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};
node * front = NULL, *rear = NULL;

void enqueue(int d){
 node *temp = new node();
 temp->data = d;
 if(front == NULL){
     front = temp;
     rear  = temp;
     return;
 }
 rear->next = temp;
 rear = temp;
}
void dequeue(){
 node *temp = front;
 front = front->next;
 delete(temp);
}
void first(){
 cout<<endl;
 cout<<front->data;
}
void display(){
    cout<<endl;
 node *temp = front;
 while (temp!=NULL){
     cout<<temp->data<<" ";
     temp = temp->next;
 }
}

int main(){
    int i,n,d;
    cin>>n;
    for ( i = 0; i < n; i++)
    {
        cin>>d;
        enqueue(d);
    }
    display();
    first();
    dequeue();
    display();
    dequeue();
    first();
    display();
 return 0;   
}