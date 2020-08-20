#include<bits/stdc++.h>
using namespace std;
struct Node
{
	int data;
	Node *link;
};
struct LinkedList { 
    Node* head; 
    LinkedList() 
    { 
        head = NULL; 
    }
};
void push(int data) 
    { 
        Node* temp = new Node(data); 
        temp->next = head; 
        head = temp; 
    } 
int main()
{
	int n;
	LinkedList ll;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		ll.push(i);
	}
	ll.print();
}
