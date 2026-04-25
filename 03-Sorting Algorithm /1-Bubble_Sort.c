#include <stdio.h>

int main()
{
    int arr[20],i,j,n,temp;

    printf("Enter the number of element : ");
    scanf("%d",&n);

    printf("Enter the element : ");
    for(i = 0;i < n;i++)
    {
         scanf("%d",&arr[i]);       
    }

    for(i = 0;i < n-1;i++)
    {
        for(j = 0;j < n-i-1;j++)
        {
            if(arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    printf("Sorted array using Bubble Sort : ");
    for(i = 0;i < n;i++)
    {
        printf("%d",arr[i]);
    }

    return 0;
}
