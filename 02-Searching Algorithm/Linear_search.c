#include <stdio.h>

int main()
{
    int array[10],n,i,key,found = 0;

    printf("Enter the number of element : ");
    scanf("%d",&n);

    printf("Enter the element : ");
    for(i = 0; i < n; i++)
    {
        scanf("%d",&array[i]);
    }

    printf("Enter the key value : ");
    scanf("%d",&key);

    for (i = 0; i < n; i++)               // Linear Search
    {
        if(array[i] == key)
        {
            printf("Value found at position %d",i + 1);
            found = 1;
            break;
        }
    }
    
    if(found == 0)
    {
        printf("Value not found");
    }

    return 0;
}
