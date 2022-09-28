#include <bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* next;
    node* prev;
    node(int val){
        data = val;
        next = NULL;
        prev = NULL;
    }
};
void insert(node** head_ref,int data){
    node* new_node = new node(data);
    if(*head_ref == NULL){
        *head_ref = new_node;
        return;
    }
    node* temp = *head_ref;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = new_node;
    new_node->prev = temp;
    return;
}
void print(node* head){
    cout<<"print forward: ";
    node* temp = head;
    while(temp->next){
        cout<<temp->data << " ";
        temp = temp->next;
    }
    cout<<temp->data;
    cout<<"\nprint back : ";
    while (temp->prev)
    {
        cout<<temp->data << " ";
        temp = temp->prev;
    }
    cout<<temp->data << endl;
    return;
}
int getSize(node* head){
    int k = 0;
    while(head){
        k++;
        head = head->next;
    }
    return k;
}
node *split(node *head) 
{ 
    node *fast = head,*slow = head; 
    while (fast->next && fast->next->next) 
    { 
        fast = fast->next->next; 
        slow = slow->next; 
    } 
    node *temp = slow->next; 
    slow->next = NULL; 
    return temp; 
} 
node *merge(node *first, node *second) 
{ 
    if (!first) 
        return second; 
    if (!second) 
        return first; 
    if (first->data < second->data) 
    { 
        first->next = merge(first->next,second); 
        first->next->prev = first; 
        first->prev = NULL; 
        return first; 
    } 
    else
    { 
        second->next = merge(first,second->next); 
        second->next->prev = second; 
        second->prev = NULL; 
        return second; 
    } 
} 
node *mergeSort(node *head) 
{ 
    if (!head || !head->next) 
        return head; 
    node *second = split(head); 
    head = mergeSort(head); 
    second = mergeSort(second); 
    return merge(head,second); 
} 

int main()
{
    int x,n = 5;
    node* head = NULL;
    for (int i = n; i > 0; i--)
    {  
        cin>>x;
        insert(&head, x);
    }
    print(head);
    cout<< "size : " << getSize(head) << endl;
    cout << "after sorting : \n";
    head = mergeSort(head);
    print(head);
    return 0;
}