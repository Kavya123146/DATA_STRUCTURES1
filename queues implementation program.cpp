//queues implementation program by using arrays
#include<stdio.h>
#define MAX 5
int queue[MAX];
int rear=-1;
int front=-1;
void enqueue()
{
	int a;
	if(rear==MAX-1)
	{
		printf("\noverflow");
	}
	else
	{
		printf("\nenter element:");
		scanf("%d",&a);
		if(rear==-1&&front==-1)
		{
			rear=front=0;
			queue[rear]=a;
		}
		else
		{
			rear++;
			queue[rear]=a;
			
		}
	}
}
void dequeue()
{
	int temp;
	if(front==-1)
	{
		printf("\nunderflow");
	}
	else if(rear==front)
	{
		temp=queue[front];
		printf("\nThe dequeued element %d",temp);
		rear=front=-1;
	}
	else
	{
		temp=queue[front];
		printf("\nThe dequeued element=%d",temp);
		front++;
	}
}
void peek()
{
	if(front==-1)
	{
		printf("\nunderflow");
	}
	else
	{
		printf("\nThe front element=%d",queue[front]);
	}
}
void display()
{
	int i;
	if(front==-1)
	{
		printf("\nunderflow");
	}
	else
	{
		for(i=front;i<=rear;i++)
		{
			printf("\n%d",queue[i]);
		}
	}
}
int main()
{
	int choice,ch=1;
	while(ch)
	{
		printf("\n1.enqueue()\n2.dequeue()\n3.peek()\n4.display()");
		printf("\nenter your choice");
		scanf("%d",&choice);
		switch(choice)
		{
			case1:
				enqueue();
				break;
			case2:
				dequeue();
				break;
			case3:
				peek();
				break;
			case4:
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
