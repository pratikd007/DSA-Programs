#include <stdio.h>
int main()
{
    int array[20],i,n;
    int odd = 0, even = 0;   // store the number of even & odd element

    printf("Enter the number of element : ");
    scanf("%d",&n);

    printf("Enter the element : ");
    for(i = 0;i < n;i++)
    {
      scanf("%d",&array[i]);
    }

    for(i = 0;i < n;i++)              // Count even and odd
    {
        if(array[i] % 2 == 0)
        {
            even++;
        }
        else 
        {
            odd++;
        }
    }
    
    printf("Total Even elements in  the array : %d\n",even);
    printf("Total Odd elements in the array : %d\n",odd);

    return 0;
}
