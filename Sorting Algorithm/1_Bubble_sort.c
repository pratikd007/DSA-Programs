#include <stdio.h>

int main()
{
    int arr[20], n, i, j, temp;

    printf("Enter the number of element : ");
    scanf("%d",&n);

    printf("Enter the element :");
    for (i = 0;i < n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    for ( i = 0;i < n - 1;i++)               // Bubble sort
    {
        for(j = 0;j < n - i - 1;j++)
        {
            if(arr[j] > arr[j + 1])
            {
                temp = arr[j];         //swep
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("Sorted array : ");
    for(i = 0;i < n;i++)
    {
        printf("%d ",arr[i]);
    }
    
    return 0;
}
