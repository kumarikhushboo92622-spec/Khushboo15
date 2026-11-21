#include <stdio.h>
void minMax(int a[], int n, int *mn, int *mx)
{
    int i;
    *mn = a[0];
    *mx = a[0];
    for(i = 1; i < n; i++)
    {
        if(a[i] < *mn)
        {
            *mn = a[i];
        }
        if(a[i] > *mx)
        {
            *mx = a[i];
        }
    }
}
int main()
{
    int n, i, mn, mx;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter array elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    minMax(a, n, &mn, &mx);
    printf("Min = %d\n", mn);
    printf("Max = %d", mx);
    return 0;
}

