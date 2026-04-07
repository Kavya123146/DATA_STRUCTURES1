#include<stdio.h>
#define MAX 5
int stack[MAX];
int top=-1;
void push()
{
	int a;
	if(top==MAX-1)
	{
		printf("\noverflow");
	}
	else
	{
		printf("\nenter element:");
		scanf("%d",&a);
		top++;
		stack[top]=a;
	}
}
void pop()
{
	if(top==-1)
	{
		printf("\nunderflow");
	}
	else
	{
		int  temp;
		temp=stack[top];
		printf("\nThe pooped element:%d",temp);
		top--;
	}
}
void peek()
{
	if(top==-1)
	{
		printf("\nunderflow");
	}
	else
	{
		printf("\nThe top most element:%d",stack[top]);
	}
}
void display()
{
	int i;
	if(top==-1)
	{
		printf("\nunderflow");
	}
	else
	{
		for(i=top;i>=0;i--)
		{
			printf("\n%d",stack[i]);
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
				printf("\nInvalid option");
		}
		printf("\nDo you want another option:");
		scanf("%d",&ch);
	}
	return 0;
}
