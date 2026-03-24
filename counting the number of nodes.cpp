#include<stdio.h>
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
		printf("%d",temp->data);
		temp=temp->link;
	}
	
}
int main()
{
	create();
	int count=0;
	temp=head;
	while(temp!=0)
	{
		count++;
		temp=temp->link;
	}
	printf("\n count is %d",count);
	return 0;
	
}
