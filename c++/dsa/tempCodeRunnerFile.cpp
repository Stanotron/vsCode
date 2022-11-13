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
    cout<<start->data;
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
