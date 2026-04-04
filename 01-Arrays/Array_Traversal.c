#include<stdio.h>
int main()
{
    int i;
    int array[5] = {11,22,33,44,55};  //array element

    printf("Array Element : ");

    for(i=0;i<5;i++)    // For access the element 
    {
        printf("%d ",array[i]);   // Print the array element 
    }
    return 0;
}