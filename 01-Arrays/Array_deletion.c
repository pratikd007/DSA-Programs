#include <stdio.h>
int main()
{
      int array[10],i,j,n,val,found = 0;
  
      printf("Enter the number of element : ");       // Input the size of array
      scanf("%d",&n);

      printf("Enter the array element : ");       // Input the array element 
      for(i = 0;i < n;i++)
        {
            scanf("%d",&array[i]);
        }

      printf("Enter the element to delete : ");         // Input the delete value
      scanf("%d",&val);

      for(i = 0;i < n;i++)
        {
                if(array[i] == val)
                {
                      	found = 1;
												for(j = i;j < n-1;j++)
													{
																	array[j] = array[j+1];
													}
													n--;
													break;
                }
        }
	
			if(found == 0)                // Display output
			{
							printf("Element not found\n");
			}
			else
			{
							printf("Array after deletion : ");
							for(i = 0;i < n;i++)
								{
 												printf("%d ",array[i]);
								}
			}
	
			return 0;
}
