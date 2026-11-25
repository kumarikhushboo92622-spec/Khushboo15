#include <stdio.h>
int main()
{
    int a[100], b[100], c[200];
    int n, m;
    int i = 0, j = 0, k = 0;
    // Input size of first array
    scanf("%d", &n);
    // Input first sorted array
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    // Input size of second array
    scanf("%d", &m);
    // Input second sorted array
    for(i = 0; i < m; i++)
    {
        scanf("%d", &b[i]);
    }
    i = 0;
    j = 0;
    // Merge both sorted arrays
    while(i < n && j < m)
    {
        if(a[i] <= b[j])
        {
            c[k] = a[i];
            i++;
        }
        else
        {
            c[k] = b[j];
            j++;
        }
        k++;
    }
    // Copy remaining elements of first array
    while(i < n)
    {
        c[k] = a[i];
        i++;
        k++;
    }
    // Copy remaining elements of second array
    while(j < m)
    {
        c[k] = b[j];
        j++;
        k++;
    }
    // Print merged sorted array
    for(i = 0; i < n + m; i++)
    {
        printf("%d ", c[i]);
    }
    return 0;
}
