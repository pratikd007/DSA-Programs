#include <stdio.h>
int main()
{
      int array[20],n,i,pos,val;
  
      printf("Enter the number : ");     // Input number of Element
      scanf("%d",&n);

      printf("Enter the element of array : ");     // Input array element
      for(i = 0;i < n;i++)
        {
              scanf("%d",&array[i]);
        }

      printf("Enter the position to insert the element in array (1 to %d) : ",n);    // Input Array position
      scanf("%d",&pos);

      printf("Enter the element to insert : ");    // Input the elemrnt for insertion
      scanf("%d",&val);

      for(i = n;i >= pos;i--)    
        {
              array[i] = array[i-1];
        }
      array[pos-1] = val;     // Insert the element into array
  
      n++;    // Increase the array size

      printf("Array after insertion : ");    // Display the final array
      for(i = 0;i < n;i++)
        {
              printf("%d ",array[i]);
        }

      return 0;
}
