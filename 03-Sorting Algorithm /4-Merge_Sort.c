#include <stdio.h>

int temp[100], arr[100];
void merge(int low,int mid,int high)
{
    int i = low,j = mid + 1,k = low;

    while(i <= mid && j <= high)
    {
        if(arr[i] < arr[j])
        {
            temp[k] = arr[i];
            i++;
        }
        else{
            temp[k] = arr[j];
            j++;
        }
        k++;
    }
    
    while (i <= mid)
    {
        temp[k] = arr[i];
        i++;
        k++;
    }
    
    while(j <= high)
    {
        temp[k] = arr[j];
        j++;
        k++;
    }

    for(i = low;i <= high;i++)
    {
        arr[i] = temp[i];
    }
}

void mergesort(int low,int high)
{
    int mid;
    if(low < high)
    {
        mid = (low + high) / 2;

        mergesort(low, mid);
        mergesort(mid+1,high);
        merge(low,mid,high);
    }
}

int main()
{
    int n,i;

    printf("Enter the number of element : ");
    scanf("%d",&n);

    printf("Enter the element : ");
    for(i = 0;i < n;i++)
    {
        scanf("%d",&arr[i]);
    }

    mergesort(0, n-1);

    printf("Sorted array : ");
    for(i = 0;i < n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
