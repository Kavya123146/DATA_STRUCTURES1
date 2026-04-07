//inserting node at position in CLL
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
	struct node *enode=0;
	enode=(struct node*)malloc(sizeof(struct node));
	printf("\n enter newely created node data:");
	scanf("%d",&enode->data);
	enode->next=0;
	int i,pos;
	printf("\nenter position:");
	scanf("%d",&pos);
	if(head==0)
	{
		head=tail=enode;
		tail->next=head;
	}
	else if(pos==1)
	{
		enode->next=head;
		head=enode;
		tail->next=head;	
	}
	else
	{
		temp=head;
		for(i=1;i<pos-1;i++)
		{
			temp=temp->next;
		}
		enode->next=temp->next;
		temp->next=enode;
	}
	printf("\nAfter Inserting:");
	display();
	printf("\n %d",tail->next->data);
	return 0;
	
}
	

