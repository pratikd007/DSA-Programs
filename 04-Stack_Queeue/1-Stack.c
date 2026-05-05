#include <stdio.h>
#include <stdlib.h>

int stack[20];
int top = -1;
int size;

void push()
{
    int val;
    if(top == size)
    {
        printf("Stack is overflow\n");
    }
    else
    {
        printf("Enter the value to enter : ");
        scanf("%d",&val);
        top++;
        stack[top] = val;
        printf("Value inserted\n");
    }
}

void pop()
{
    if(top == -1)
    {
        printf("Stack is underflow\n");
    }
    else
    {
        printf("Deleted value is %d\n",stack[top]);
        top--;
    }
}

void peek()
{
    printf("Top element is %d\n",stack[top]);
}

void display()
{
    int i;
    if(top == -1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("Stack element are : ");
        for(i = top; i >= 0;i--)
        {
            printf("%d\n",stack[i]);
        }
    }
}

int main()
{
    int choice;
    
    printf("Enter is size of stack : ");
    scanf("%d",&size);

    while(1)
    {
        printf("\n----STACK MENU----\n");
        printf("1.Push\n");
        printf("2.Pop\n");
        printf("3.Peek\n");
        printf("4.Display\n");
        printf("5.Exit\n");

        printf("Enter the choice : ");
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
            case 5:
                printf("Exit\n");
                exit(0);
            default:
                printf("\nInvalid choice\n");
                break;
        }
    }
    return 0;
}
