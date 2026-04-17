//linked list program for stack
#include<stdio.h>
#include<stdlib.h>
struct stack
{
	int data;
	struct stack *next;
};
struct stack *top=0,*temp=0;
void push()
{
	struct stack *newnode=0;
	newnode=(struct stack *)malloc(sizeof(struct stack));
	printf("\nenter data:");
	scanf("%d",&newnode->data);
	newnode->next=top;
	top=newnode;
}
void pop()
{
	if(top==0)
	{
		printf("\nunderflow");
	}
	else
	{
		temp=top;
		top=top->next;
		printf("\nThe poped element is:%d",temp->data);
		free(temp);
	}
}
void peek()
{
	if(top==0)
	{
		printf("\nstack is empty");
	}
	else
	{
		printf("\n The top most element is:%d",top->data);
	}
}
void display()
{
	if(top==0)
	{
		printf("\nunderflow");
	}
	else
	{
		temp=top;
		while(temp!=0)
		{
			printf("\n%d",temp->data);
			temp=temp->next;
		}
	}
}
int main()
{
	int choice,ch=1;
	while(ch)
	{
		printf("\n1.push()\n2.pop()\n3.peek()\n4.display()");
		printf("\nenter your choice");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
				peek();
				break;
			case 4:
				display();
				break;
			default:
				printf("\nInvalid choice");
		}
		printf("\nDo you want another option:");
		scanf("\n%d",&ch);
	}
	return 0;
}
