#include <bits/stdc++.h>
using namespace std;

struct node
{
	int data;
	node* next;
};
node* reverse(node* head)
{
	node* current = head; 
	node* prev = NULL;
	node* next = NULL;
	while(current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	head = prev;
	return head;
}
int main()
{
	node n1,n2,n3,n4;
	node* head = &n1;
	n1.data = 2; n1.next = &n2;
	n2.data = 3; n2.next = &n3;
	n3.data = 4; n3.next = &n4;
	n4.data = 5; n4.next = NULL;
	
	head = reverse(head);
	node* temp;
	temp = head;
	while(1 )
	{
		cout<<temp->data<<" ";
		temp = temp->next;
		if(temp == NULL)
			break;
	}
	return 0;
}