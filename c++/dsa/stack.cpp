// Stack using array

#include<iostream>
using namespace std;
#define max 100

class stack{
 int array[max],top=-1;

 public:

 void push(int d){
     if(top==max-1) cout<<"overflow"<<endl;
     else array[++top]=d;
 }
 void pop(){
     if(top==-1) cout<<"ERROR"<<endl;
     else top--;
 }
 void display(){
     cout<<endl;
     if(top==-1) cout<<"Error"<<endl;
     else {
         for (int i = 0; i < top+1; i++)
         {
            cout<<array[i]<<" ";
         }
         
     }
 }
void topelem(){
    cout<<endl;
    if(top==-1) cout<<"Error"<<endl;
    else cout<<array[top]<<endl;
}
};

int main(){
    stack a;
    a.push(51);
    a.push(41);
    a.push(14);
    a.display();
    a.pop();
    a.display();
    a.push(56);
    a.display();
    a.topelem();
}





//stack using linked list




#include<iostream>
using namespace std;
struct node{
    int data;
    node *next;
};
node *top = NULL;
void push(int d){
    node *temp = new node();
    temp->data = d;
    if(top==NULL){
        top = temp;
        return;
    }
    temp->next = top;
    top = temp;
}
void pop(){
    node *temp = top;
    if(temp == NULL) {cout<<"ERROR"<<endl; return;}
    top = temp->next;
}
void print(){
    cout<<endl;
   node *temp = top; 
  if(temp == NULL) {cout<<"ERROR"<<endl; return;}
  while(temp!=NULL){
      cout<<temp->data<<",";
      temp = temp->next;
  }
}
int main(){
    int n,i,d;
     cin>>n;
     for ( i = 0; i < n; i++)
     {   cin>>d;
         push(d);
     }
     print();
     pop();
     print();
}





// reversing a linked list using stack




#include<iostream>
#include<stack>
using namespace std;
struct node{
    int data;
    node* link;
};
node *start = NULL;
void insert(int d){
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
void reverse(){
    stack<node *> S;
    node *temp = start;
    while(temp!=NULL){
        S.push(temp);
        temp = temp->link;
    }
    cout<<S.top()->data<<"'";
    temp = S.top();
    start = temp;
    S.pop();
    while(!S.empty()){
        temp->link = S.top();
        S.pop();
        temp = temp->link;
    }
    temp->link = NULL;
}
int main()
{
    int n;cin>>n;
    int d;
    for (int i=0;i<n;i++) {
        cin>>d;
        insert(d);
    }display();
    reverse();
    display();
	return 0;
}





// infix to postfix usig stack







#include <iostream>
#include <stack>
#include <string>
using namespace std;

void PF(string a)
{
  stack<char> S;
  string postfix = "";
  int l = a.length();
  for (int i = 0; i < l; i++)
  {
    char c = a[i];
   
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
    {
      postfix += c;
    }

    else if (c == '(')
      S.push(c);

    else if (c == ')')
    {
      while (S.top() != '(')
      {
        postfix += S.top();
        S.pop();
      }
      S.pop();
    }
    else if (c == '-')
    {
      if (!S.empty())
      {
        while (S.top() != '(' )
        {
          postfix += S.top();
          S.pop();
          if(S.empty()){
                break;
            }
        }
        S.push(c);
      }
      else
        S.push(c);
    }

    else if (c == '+')
    {
      if (!S.empty())
      {
        while ( S.top() != '(')
        {
            postfix += S.top();
            S.pop();
            if(S.empty()){
                break;
            }
        }
        S.push(c);
      }
      else
        S.push(c);
    }

    else if (c == '*')
    {
      if (!S.empty())
      {
        while (S.top() != '+' || S.top() != '-' || S.top() != '(')
        {
          postfix += S.top();
          S.pop();
          if(S.empty()){
                break;
            }
        }
        S.push(c);
      }
      else
        S.push(c);
    }
    else if (c == '/')
    {
      if (!S.empty())
      {
        while (S.top() != '+' || S.top() != '-' || S.top() != '(' )
        {
          postfix += S.top();
          S.pop();
          if(S.empty()){
                break;
            }
        }
        S.push(c);
      }
      else
        S.push(c);
    }
  }
  while (!S.empty())
  {
    postfix += S.top();
    S.pop();
  }
  cout << endl
       << postfix;
}

int main()
{
  string s;
  cin >> s;
  PF(s);
  return 0;
}