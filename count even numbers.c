#include <stdio.h>
int countEven(int a[], int n)
{
    int count = 0;
    for(int i = 0; i < n; i++)
    {
        if(a[i] % 2 == 0)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter array elements: ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int result = countEven(a, n);
    printf("Even numbers = %d", result);
    return 0;
}

