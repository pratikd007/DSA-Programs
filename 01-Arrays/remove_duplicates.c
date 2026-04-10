#include <stdio.h>
 
int main()
{
    int array[20],i,j,n;

    printf("Enter the number of element : ");
    scanf("%d",&n);

    printf("Enter the element : ");
    for(i = 0;i < n;i++)
    {
        scanf("%d",&array[i]);
    }

    j = 0;          // remove duplicates
    for(i = 0;i < n-1;i++)
    {
        if(array[i] != array[i + 1])
        {
            array[j] = array[i];
            j++;
        }
    }

    array[j] = array[n-1];   // last element
    j++;

    printf("Array after removing duplicates : ");
    for ( i = 0; i < j; i++)
    {
        printf("%d ",array[i]);
    }
    
    return 0;
}
