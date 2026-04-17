//queues implementation program by using arrays
#include<stdio.h>
#define MAX 5

int queue[MAX];
int rear = -1;
int front = -1;

void enqueue()
{
    int a;
    if(rear == MAX - 1)
    {
        printf("\nOverflow");
    }
    else
    {
        printf("\nEnter element: ");
        scanf("%d", &a);

        if(front == -1 && rear == -1)
        {
            front = rear = 0;
        }
        else
        {
            rear++;
        }

        queue[rear] = a;
    }
}

void dequeue()
{
    int temp;

    if(front == -1)
    {
        printf("\nUnderflow");
    }
    else if(front == rear)
    {
        temp = queue[front];
        printf("\nThe dequeued element = %d", temp);
        front = rear = -1;
    }
    else
    {
        temp = queue[front];
        printf("\nThe dequeued element = %d", temp);
        front++;
    }
}

void peek()
{
    if(front == -1)
    {
        printf("\nUnderflow");
    }
    else
    {
        printf("\nThe front element = %d", queue[front]);
    }
}

void display()
{
    int i;

    if(front == -1)
    {
        printf("\nQueue is empty");
    }
    else
    {
        printf("\nQueue elements are:\n");
        for(i = front; i <= rear; i++)
        {
            printf("%d ", queue[i]);
        }
    }
}

int main()
{
    int choice, ch = 1;

    while(ch)
    {
        printf("\n\n--- Queue Operations ---");
        printf("\n1. Enqueue");
        printf("\n2. Dequeue");
        printf("\n3. Peek");
        printf("\n4. Display");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                enqueue();
                break;

            case 2:
                dequeue();
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

        printf("\nDo you want to another option(yes:1||no:0): ");
        scanf("%d", &ch);
    }

    return 0;
}
