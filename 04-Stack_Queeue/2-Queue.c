#include <stdio.h>
#include <stdlib.h>

int queue[20];
int front = -1;
int rear = -1;
int size;

void enqueue()
{
    int val;
    if(rear == size)
    {
        printf("Queue is overflow\n");
    }
    else
    {
        printf("Enter the value : ");
        scanf("%d",&val);
        if(front == -1)
        {
            front = 0;
        }
        rear++;
        queue[rear] = val;
        printf("Value inserted\n");
    }
}

void dequeue()
{
    if(rear == -1)
    {
        printf("Queue is underflow\n");
    }
    else
    {
        printf("Deleted value is : %d",queue[front]);
        front++;
    }
}

void peek()
{
    if(rear == -1)
    {
        printf("Queue is empty\n");
    }
    else
    {
        printf("Front value is %d\n",queue[front]);
    }
}

void display()
{
    int i;
    if(rear == -1)
    {
        printf("Queue is empty\n");
    }
    else
    {
        printf("Queue elements are : ");
        for(i = front;i <= rear;i++)
        {
            printf("%d ",queue[i]);
        }
    }
}

int main()
{
    int choice;
    printf("Enter the size : ");
    scanf("%d",&size);

    while(1)
    {
        printf("\n----QUEUE MENU----\n");
        printf("1.Enqueue\n");
        printf("2.Dequeue\n");
        printf("3.Peek\n");
        printf("4.Display\n");
        printf("5.Exit\n");

        printf("Enter the choice : ");
        scanf("%d",&choice);

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
            case 5:
                printf("Exit\n");
                exit(0);
            default:
                printf("Invalid choice\n");
                break;
        }
    }
    return 0;
}
