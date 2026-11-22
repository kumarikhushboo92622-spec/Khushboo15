#include <stdio.h>
int findFloor(int a[], int n, int key)
{
    int low = 0, high = n - 1;
    int ans = -1;
    while(low <= high)
    {
        int mid = (low + high) / 2;
        if(a[mid] == key)
        {
            return a[mid];
        }
        else if(a[mid] < key)
        {
            ans = a[mid];
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return ans;
}
int main()
{
    int n, key;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter sorted array elements: ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter key: ");
    scanf("%d", &key);
    int result = findFloor(a, n, key);
    if(result == -1)
        printf("None");
    else
        printf("Floor = %d", result);
    return 0;
}

