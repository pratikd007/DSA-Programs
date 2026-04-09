#include <stdio.h>
#include <limits.h>

int main()
{
    int array[20],i,n;
    int largest,second;

    printf("Enter the number of element : ");
    scanf("%d",&n);

    printf("Enter the element : ");
    for(i = 0;i < n;i++)
    {
        scanf("%d",&array[i]);
    }

    largest = second = INT_MIN;  // Initialize the smallest value can int variable have

    for(i = 0;i < n;i++)
    {
        if(array[i] > largest)
        {
            second = largest;
            largest = array[i];
        }
        else if(array[i] > second && array[i] != largest)
        {
            second = array[i];
        }
    }

    if(second == INT_MIN)
    {
        printf("Second Largest element not found\n");
    }
    else
    {
        printf("Second largest element is : %d",second);
    }

    return 0;
}
