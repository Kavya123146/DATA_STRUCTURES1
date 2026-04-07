//reversing the list in CLL
#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *head=0,*tail=0,*temp=0;
void create()
{
	struct node *newnode=0;
	int i,n;
	printf("\nenter n size:");
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		newnode=(struct node *)malloc(sizeof(struct node));
		printf("\n enter node %d data:",i+1);
		scanf("%d",&newnode->data);
		newnode->next=0;
		if(head==NULL)
		{
			head=tail=newnode;
			tail->next=head;
		}
		else
		{
			tail->next=newnode;
			tail=newnode;
			tail->next=head;
		}
	}
}
void display()
{	
	temp=head;
	do
	{	
		printf("%d",temp->data);
		temp=temp->next;
	}while(temp!=head);
}
int main()
{
	create();
	display();
	struct node *prevnode=tail,*currentnode=head,*nextnode=0;
	do
	{
		nextnode=currentnode->next;
		currentnode->next=prevnode;
		prevnode=currentnode;
		currentnode=nextnode;
	}while(currentnode!=head);
	tail=head;
	head=prevnode;
	printf("\nAfter Reversing:");
	display();
	printf("\n%d",tail->next->data);
	return 0;
}
