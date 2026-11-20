#include <stdio.h>
int main()
{
    int n, i;
    int a[100];
    int *p;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    p = a;
    printf("Enter array elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", (p + i));
    }
    printf("Array elements are: ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", *(p + i));
    }
    return 0;
}

