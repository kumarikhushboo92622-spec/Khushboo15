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
    printf("Enter number of books: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        printf("\nEnter details of book %d:\n", i + 1);
        printf("Enter title: ");
        scanf(" %49[^\n]", b[i].title);
        printf("Enter author: ");
        scanf(" %49[^\n]", b[i].author);
        printf("Enter price: ");
        scanf("%f", &b[i].price);
    }
    printf("\nBook Details:\n");
    printf("Title\t\tAuthor\t\tPrice\n");
    for(i = 0; i < n; i++)
    {
        printf("%s\t\t%s\t\t%.2f\n",
               b[i].title, b[i].author, b[i].price);
    }
    return 0;
}

