#include <stdio.h>
struct Book
{
    char title[50];
    char author[50];
    float price;
};
int main()
{
    struct Book b[100];
    int n, i;
    float sum = 0, avg;
    printf("Enter number of books: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        printf("\nEnter title: ");
        scanf(" %49[^\n]", b[i].title);
        printf("Enter author: ");
        scanf(" %49[^\n]", b[i].author);
        printf("Enter price: ");
        scanf("%f", &b[i].price);
        sum = sum + b[i].price;
    }
    avg = sum / n;
    printf("\nAverage Price = %.2f", avg);
    return 0;
}

