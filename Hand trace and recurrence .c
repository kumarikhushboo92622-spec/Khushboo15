#include <stdio.h>
void merge(int a[], int left, int mid, int right)
{
    int temp[100];
    int i = left;
    int j = mid + 1;
    int k = left;
    // Merge two sorted halves
    while(i <= mid && j <= right)
    {
        if(a[i] <= a[j])
            temp[k++] = a[i++];
        else
            temp[k++] = a[j++];
    }
    // Copy remaining elements
    while(i <= mid)
        temp[k++] = a[i++];
    while(j <= right)
        temp[k++] = a[j++];
    // Copy back to original array
    for(i = left; i <= right; i++)
        a[i] = temp[i];
}
void mergeSort(int a[], int left, int right)
{
    if(left < right)
    {
        int mid = left + (right - left) / 2;
        mergeSort(a, left, mid);
        mergeSort(a, mid + 1, right);
        merge(a, left, mid, right);
    }
}
int main()
{
    int a[] = {5, 1, 4, 2, 8};
    int n = 5;
    mergeSort(a, 0, n - 1);
    printf("Sorted array: ");
    for(int i = 0; i < n; i++)
        printf("%d ", a[i]);
    return 0;
}
