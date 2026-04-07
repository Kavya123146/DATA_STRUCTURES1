#include <stdio.h>
#include <stdlib.h>
struct node
{
	int data;
	struct node *link;
};
struct node *head=0,*temp=0;
void create()
{
	struct node *newnode=0;
	int n,i;
	printf("\n enter n size:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		newnode=(struct node *)malloc(sizeof(struct node));
		printf("\n enter node %d data",i+1);
		scanf("%d",&newnode->data);
		newnode->link=NULL;
		if(head==NULL)
		{
			head=newnode;
			temp=newnode;
		}
		else
		{
			temp->link=newnode;
			temp=newnode;
		}
	}
}
void display()
{
	temp=head;
	while(temp!=0)
	{
		printf("%d\t",temp->data);
		temp=temp->link;
	}
	
}
int main()
{
	create();
	struct node *prevnode=0;
	display();
	int i,pos;
	printf("\n enter position:");
	scanf("%d",&pos);
	temp=head;
	if(head==NULL)
	{
		printf("\n list is empty");
	}
	else
	{
		for(i=1;i<pos-1;i++)
		{
			temp=temp->link;
		}
	}
	prevnode=temp->link;
	temp->link=prevnode->link;
	prevnode->link=0;
	free(prevnode);
	display();
	return 0;
}
