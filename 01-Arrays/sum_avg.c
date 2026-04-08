#include <stdio.h>
int main()
{
    int array[20],n,i;
    int sum = 0;
    float avg;

    printf("Enter the number of element : ");
    scanf("%d",&n);

    printf("Enter thr element : ");
    for(i = 0;i < n;i++)
    {
        scanf("%d",&array[i]);
    }

    for(i = 0;i < n;i++)
    {
        sum = sum + array[i];
    }

    avg = (float)sum / n;

    printf("Total sum : %d\n",sum);
    printf("Total average : %.2f\n",avg);

    return 0;
}
