//reversing in the list using doubly linked list
#include <stdio.h>
#include <stdlib.h>
struct node
{
	struct node *prev;
	int data;
	struct node *next;
};
struct node *head=0,*tail=0,*temp=0;
void create()
{
	struct node *newnode;
	int  i,n;
	printf("\nenter n size:");
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		newnode=(struct node *)malloc(sizeof(struct node));
		printf("\n enter node %d data:",i+1);
		scanf("%d",&newnode->data);
		newnode->prev;
		newnode->next=0;
		if(head==NULL)
		{
			head=tail=newnode;
		}
		else
		{
			tail->next=newnode;
			newnode->prev=tail;
			tail=newnode;
		}
	}
}
void display()
{
	temp=head;
	while(temp!=0)
	{
		printf("%d",temp->data);
		temp=temp->next;
	}
}
int main()
{
	create();
	display();
	struct node *currentnode=0,*newnode=0;
	currentnode=head;
	while(currentnode!=0)
	{
		nextnode=currentnode->next;
		currentnode->next=currentnode->prev;
		currentnode->prev=nextnode;
		currentnode=nextnode;
	}
	currentnode=head;
	head=tail;
	tail=currentnode;
	display();
	return 0;
	
}
