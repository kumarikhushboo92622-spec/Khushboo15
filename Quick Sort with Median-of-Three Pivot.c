#include <stdio.h>
int comparisons = 0;
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
// Find median of three elements
int medianOfThree(int a[], int lo, int hi)
{
    int mid = lo + (hi - lo) / 2;
    if(a[lo] > a[mid])
        swap(&a[lo], &a[mid]);
    if(a[lo] > a[hi])
        swap(&a[lo], &a[hi]);
    if(a[mid] > a[hi])
        swap(&a[mid], &a[hi]);
    return mid;
}
// Partition function
int partition(int a[], int lo, int hi)
{
    int p = medianOfThree(a, lo, hi);
    // Move pivot to the last position
    swap(&a[p], &a[hi]);

    int pivot = a[hi];
    int i = lo - 1;

    for(int j = lo; j < hi; j++)
    {
        comparisons++;

        if(a[j] <= pivot)
        {
            i++;
            swap(&a[i], &a[j]);
        }
    }

    swap(&a[i + 1], &a[hi]);
    return i + 1;
}
// Quick Sort
void quickSort(int a[], int lo, int hi)
{
    if(lo < hi)
    {
        int p = partition(a, lo, hi);
        quickSort(a, lo, p - 1);
        quickSort(a, p + 1, hi);
    }
}
int main()
{
    int n, a[100];
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    quickSort(a, 0, n - 1);
    printf("Sorted: ");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\nComparisons: %d", comparisons);
    return 0;
}
