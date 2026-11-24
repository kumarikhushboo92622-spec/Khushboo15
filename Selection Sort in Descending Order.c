
#include <stdio.h>

int main()
{
    int arr[100], n, i, j, max, temp;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n - 1; i++)
    {
        max = i;

        for(j = i + 1; j < n; j++)
        {
            if(arr[j] > arr[max])
            {
                max = j;
            }
        }

        temp = arr[i];
        arr[i] = arr[max];
        arr[max] = temp;
    }

    printf("Sorted array in descending order: ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

