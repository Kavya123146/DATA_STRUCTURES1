//queues implementation program by using arrays in circular linked list
#include<stdio.h>
#define MAX 5

int queue[MAX];
int rear = -1;
int front = -1;

void enqueue()
{
    int a;
    if((rear + 1) % MAX == front)
    {
        printf("\nOverflow");
    }
    else
    {
        printf("\nEnter element: ");
        scanf("%d", &a);

        if(rear == -1 && front == -1)
        {
            rear = front = 0;
        }
        else
        {
            rear = (rear + 1) % MAX;
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
        front = (front + 1) % MAX;
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
    int i = front;

    if(front == -1)
    {
        printf("\nUnderflow");
    }
    else
    {
        printf("\nQueue elements:\n");
        while(i != rear)
        {
            printf("%d ", queue[i]);
            i = (i + 1) % MAX;
        }
        printf("%d", queue[i]);
    }
}

int main()
{
    int choice, ch = 1;

    while(ch)
    {
        printf("\n1. Enqueue\n2. Dequeue\n3. Peek\n4. Display");
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
                printf("\nInvalid option");
        }

        printf("\nDo you want another option (1/0): ");
        scanf("%d", &ch);
    }

    return 0;
}
