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
	printf("\n enter n size: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		newnode=(struct node *)malloc(sizeof(struct node));
		printf("\n enter node %d data", i+1 );
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
		printf("%d",temp->data);
		temp=temp->link;
	}
}
int main()
{
	create();
	display();
	struct node *snode=0;
	snode=(struct node*)malloc(sizeof(struct node));
	printf("\n enter newely created node data:");
	scanf("%d",&snode->data);
	snode->link=NULL;
	temp=head;
	while(temp->link!=0)
	{
		temp=temp->link;
	}
	temp->link=snode;
	display();
	return 0;
}
