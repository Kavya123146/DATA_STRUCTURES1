#include<stdio.h>
#include<stdlib.h>
struct node {
	struct node *prev;
	int data;
	struct node *next;
};
struct node *head=0, *tail=0, *temp=0;
void create()
{
	struct node *newnode;
	int i,n;
	printf("enter n size:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		newnode=(struct node *) malloc (sizeof(struct node));
		printf("\nenter node %d data: ",i+1);
		scanf("%d",&newnode->data);
		newnode->prev=0;
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
	    printf("\t%d",temp->data);
		temp=temp->next;
	}
}
int main()
{
	create();
	display();
	if(head==NULL)
	{
		printf("\nList is empty");
	}
	else if(head->prev)
	{
		free(head);
		head=tail=0;
	}
	else
	{
		
	    temp=tail;
	    tail=tail->prev;
	    tail->next=NULL;
	    free(temp);
	}
display();
return 0;
}

