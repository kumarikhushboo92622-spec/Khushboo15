#include <stdio.h>
int main()
{
    int a[100], n, key;
    int i, low, high, mid;
    int linear = 0, binary = 0;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter sorted array elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter key: ");
    scanf("%d", &key);
    // Linear Search
    for(i = 0; i < n; i++)
    {
        linear++;

        if(a[i] == key)
            break;
    }
    // Binary Search
    low = 0;
    high = n - 1;
    while(low <= high)
    {
        mid = (low + high) / 2;
        binary++;

        if(a[mid] == key)
            break;
        else if(a[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }
    printf("Linear = %d\n", linear);
    printf("Binary = %d\n", binary);
    return 0;
}

