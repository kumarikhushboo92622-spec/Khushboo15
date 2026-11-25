#include <stdio.h>
void merge(int a[], int temp[], int left, int mid, int right)
{
    int i = left;
    int j = mid + 1;
    int k = left;
    while(i <= mid && j <= right)
    {
        if(a[i] <= a[j])
            temp[k++] = a[i++];
        else
            temp[k++] = a[j++];
    }
    while(i <= mid)
        temp[k++] = a[i++];
    while(j <= right)
        temp[k++] = a[j++];
    for(i = left; i <= right; i++)
        a[i] = temp[i];
}
void mergeSort(int a[], int temp[], int left, int right)
{
    if(left < right)
    {
        int mid = left + (right - left) / 2;
        mergeSort(a, temp, left, mid);
        mergeSort(a, temp, mid + 1, right);
        merge(a, temp, left, mid, right);
    }
}
int main()
{
    int n, a[100], temp[100];
    int i, count, found = 0;
    scanf("%d", &n);
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    mergeSort(a, temp, 0, n - 1);
    // Find the majority element
    for(i = 0; i < n; i++)
    {
        count = 1;
        while(i + 1 < n && a[i] == a[i + 1])
        {
            count++;
            i++;
        }
        if(count > n / 2)
        {
            printf("Majority = %d", a[i]);
            found = 1;
            break;
        }
    }
    if(found == 0)
        printf("No majority");
    return 0;
}
