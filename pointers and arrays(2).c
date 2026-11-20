#include <stdio.h>
int main()
{
    int n, i, largest;
    int a[100];
    int *p;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    p = a;
    printf("Enter array elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", p + i);
    }
    largest = *p;
    for(i = 1; i < n; i++)
    {
        if(*(p + i) > largest)
        {
            largest = *(p + i);
        }
    }
    printf("Largest = %d", largest);
    return 0;
}

