#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,i,*ptr;
    
    printf("Enter the size of array : ");
    scanf("%d",&n);
     
    ptr = (int*) malloc (n * sizeof(int));
    
    printf("Enter the element : ");
    for(i = 0;i < n;i++)
    {
        scanf("%d",(ptr+i));
    }
     
    printf("Your array element is : ");
    for(i = 0;i < n;i++)
    {
        printf("%d ",*(ptr+i));
    }
    return 0;
}
