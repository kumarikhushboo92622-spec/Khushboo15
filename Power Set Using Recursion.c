#include <stdio.h>
int count = 0;
void powerSet(int a[], int n, int index, int subset[], int size)
{
    // Base case
    if(index == n)
    {
        printf("{");
        for(int i = 0; i < size; i++)
        {
            printf("%d", subset[i]);
            if(i < size - 1)
                printf(" ");
        }
        printf("}\n");
        count++;
        return;
    }
    // Include current element
    subset[size] = a[index];
    powerSet(a, n, index + 1, subset, size + 1);
    // Exclude current element
    powerSet(a, n, index + 1, subset, size);
}
int main()
{
    int n, a[100], subset[100];
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    powerSet(a, n, 0, subset, 0);
    printf("Count = %d", count);
    return 0;
}
