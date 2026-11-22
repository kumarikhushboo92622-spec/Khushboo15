#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter array elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int largest = a[0];
    int second = -999999;
    for(i = 1; i < n; i++)
    {
        if(a[i] > largest)
        {
            second = largest;
            largest = a[i];
        }
        else if(a[i] > second && a[i] < largest)
        {
            second = a[i];
        }
    }
    printf("Second largest = %d", second);
    return 0;
}

