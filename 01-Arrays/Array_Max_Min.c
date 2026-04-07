#include <stdio.h>
int main()
{
      int array[10],n,i,max,min;

      printf("Enter the number of element : ");     // Input the size of array
      scanf("%d",&n);

      printf("Enter the element of array : ");     // Input the array element
      for(i = 0;i < n;i++)
        {
              scanf("%d",&array[i]);
        }

      // Assume the first element is max and min
      max = array[0];
      min = array[0];

      // Find the max and min element
      for(i = 0;i < n;i++)
        {
              if(array[i] > max)
              {
                    max = array[i];
              }
              if(array[i] < min)
              {
                    min = array[i];
              }
        }

        printf("Maximum array element is : %d\n",max);          // Display the output
        printf("Minimum array element is : %d\n",min);

        return 0;
}
