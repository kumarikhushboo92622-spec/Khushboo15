#include <stdio.h>
// Function 1: Calculate average
float average(int a[], int n)
{
    int i, sum = 0;
    for(i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }
    return (float)sum / n;
}
// Function 2: Count above-average elements
int aboveAverage(int a[], int n, float avg)
{
    int i, count = 0;

    for(i = 0; i < n; i++)
    {
        if(a[i] > avg)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int n, i, count;
    float avg;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter array elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    avg = average(a, n);
    count = aboveAverage(a, n, avg);
    printf("Average = %.2f\n", avg);
    printf("Above average count = %d", count);
    return 0;
}

