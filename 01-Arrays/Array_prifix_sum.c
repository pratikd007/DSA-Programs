#include <stdio.h>

int main()
{
    int array[20],prifix[20],n,i;

    printf("Enter the number of element : ");
    scanf("%d",&n);

    printf("Enter the element : ");
    for(i = 0;i < n;i++)
    {
        scanf("%d",&array[i]);
    }

    prifix[0] = array[0];     // first element

    for(i = 1;i < n;i++)         // build prifix sum array 
    {
        prifix[i] = prifix[i - 1] + array[i];
    }

    printf("Prifix sum array : ");
    for(i = 0;i < n;i++)
    {
        printf("%d ",prifix[i]);
    }

    return 0;
}
