#include <stdio.h>

int arr[100];

int quick(int low, int high)
{
    int pivot = arr[high];
    int i = low - 1;
    int j, temp;

    for(j = low; j < high; j++)
    {
        if(arr[j] <= pivot)
        {
            i++;

            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    temp = arr[i+1];
    arr[i+1] = arr[high];
    arr[high] = temp;

    return i+1;
}

void quicksort(int low, int high)
{
    int pi;

    if(low < high)
    {
        pi = quick(low, high);

        quicksort(low, pi - 1);
        quicksort(pi + 1, high);
    }
}

int main()
{
    int n, i;

    printf("Enter the number of element : ");
    scanf("%d",&n);

    printf("Enter element : \n");
    for(i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }

    quicksort(0, n-1);

    printf("Sorted array : ");
    for(i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}
