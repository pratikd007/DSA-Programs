#include <stdio.h>
int main()
{
      int array[10],i,n,temp;

      printf("Enter the number of element of array : ");        // Input the number of array element
      scanf("%d",&n);

      printf("Enter the element of array : ");        // Input the element from user
      for(i = 0;i < n;i++)
        {
              scanf("%d",&array[i]);
        }

      printf("Array Elements : ");         // Print array elements
      for(i = 0;i < n;i++)
        {
              printf("%d ",array[i]);
        }

      for(i = 0;i < n / 2;i++)         // Reverse the element
        {
              temp = array[i];
              array[i] = array[n - i - 1];
              array[n - i - 1] = temp;
        }
  
      printf("\nReversed array element : ");     // Printf array element into reverse form
      for(i = 0;i < n;i++)
        {
              printf("%d ",array[i]);
        }

      return 0;
}
