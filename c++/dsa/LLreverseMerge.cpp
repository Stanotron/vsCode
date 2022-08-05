#include <iostream>
using namespace std;
struct node
{
	int data;
	node *link;
};
node *start = NULL;
void push(int d)
{
	node *p1 = new node();
	p1->data = d;
	if (start == NULL)
	{
		start = p1;
		return;
	}
	node *p2 = start;
	while (p2->link != NULL)
	{
		p2 = p2->link;
	}
	p2->link = p1;
}

void insert(int d, int pos)
{
	node *temp = new node;
	temp->data = d;
	node *temp2 = start;
	for (int i = 0; i < pos - 2; i++)
	{
		temp2 = temp2->link;
	}
	temp->link = temp2->link;
	temp2->link = temp;
}

void create(int n)
{
	int mid;
	if (n % 2 == 0)
		mid = n / 2;
	else
		mid = (n / 2) + 1;
	node *midadd = start;
	for (int i = 0; i < mid - 1; i++)
	{
		midadd = midadd->link;
	}
	node *temp = midadd->link, *prev = NULL, *agla;

	while (temp != NULL)
	{
		agla = temp->link;
		temp->link = prev;
		prev = temp;
		temp = agla;
	}
	midadd->link = prev;

	int pos = 2;
	while (midadd->link != NULL)
	{
		insert(midadd->link->data, pos);
		midadd = midadd->link;
		pos = pos + 2;
	}
	temp = start;
	mid = n - 1;
	while (mid--)
	{
		temp = temp->link;
	}
	temp->link = NULL;
}
void show()
{
	node *a = start;
	while (a != NULL)
	{

		cout << a->data << " ";
		a = a->link;
	}
}
int main()
{
	int n;
	cin >> n;
	int d;
	for (int i = 0; i < n; i++)
	{
		cin >> d;
		push(d);
	}
	cout << "Link list data:";
	show();
	create(n);
	cout << endl
		 << "Link list data after fold:";
	show();
	return 0;
}