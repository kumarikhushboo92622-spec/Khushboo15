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
    int n, i, max;
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
    }
    max = 0;
    for(i = 1; i < n; i++)
    {
        if(b[i].price > b[max].price)
        {
            max = i;
        }
    }
    printf("\nMost Expensive Book Details:\n");
    printf("Title: %s\n", b[max].title);
    printf("Author: %s\n", b[max].author);
    printf("Price: %.2f\n", b[max].price);
    return 0;
}

