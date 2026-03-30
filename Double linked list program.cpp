#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*link;	
};
int main()
{
	struct node *head=NULL,*newnode=NULL,*newnode2=NULL;
	newnode=(struct node*)malloc(sizeof (struct node));
	printf("\nenter node data:");
	scanf("%d",&newnode->data);
	newnode->link=NULL;
	head=newnode;
	newnode2=(struct node*)malloc(sizeof(struct node));
	printf("\n enter node2 data:");
	scanf("%d",&newnode2->data);
	newnode2->link=NULL;
	newnode->link=newnode2;
	printf("%d %d",newnode->data,newnode2->data);
	return 0;
}

