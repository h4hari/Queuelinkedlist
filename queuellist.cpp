#include<iostream>
#include<stdlib.h>
 
using namespace std;
 
struct node
{
	int data;
	struct node *next;
}*front=NULL,*rear,*temp;
 
void insert()
{
	temp=new node;
	cout<<"Enter data:";
	cin>>temp->data;
	temp->next=NULL;
	
	if(front==NULL)
		front=rear=temp;
	else
	{
		rear->next=temp;
		rear=temp;
	}
}
 
void delet()
{
	if(front==NULL)
		cout<<"Queue is empty\n";
	else
	{
		temp=front;
		front=front->next;
		cout<<"Deleted node is "<<temp->data<<"\n";
		delete(temp);
	}
}
 
void disply()
{
	if(front==NULL)
		cout<<"Queue is empty\n";
	else
	{
		temp=front;
		while(temp!=NULL)
		{
			cout<<temp->data<<"->";
			temp=temp->next;
		}		
	}
}
 
int main()
{
	int ch;
	while(1)
	{
		cout<<"1.Insert\n2.Delete\n3.Display\n4.Exit";
		cout<<"\n\nEnter your choice:";
		cin>>ch;
		cout<<"\n";
		
		switch(ch)
		{
			case 1: insert();
					break;
			case 2: delet();
					break;
			case 3: disply();
					break;
			case 4: exit(0);
					break;
			default: cout<<"Wrong Choice!!!";
		}
	}
	
	return 0;
}
