#include <stdio.h>

int main()
{
    int array[10],n,i,key;
    int low = 0, mid, high;
    int found = 0;

    printf("Enter the number of element : ");
    scanf("%d",&n);

    printf("Enter the element : ");
    for(i = 0;i < n;i++)
    {
        scanf("%d",&array[i]);
    }

    printf("Enter the key value : ");
    scanf("%d",&key);

    high = n - 1;

    while(low <= high)
    {
        mid = (low + high) / 2;

        if(array[mid] == key)
        {
            printf("Element found at %d\n",mid + 1);
            found = 1;
            break;
        }

        else if(array[mid] < key)
        {
            low = mid + 1;
        }

        else
        {
            high  = mid - 1;
        }
    }

    if(found == 0)
    {
        printf("Element not found");
    }

    return 0;
}
