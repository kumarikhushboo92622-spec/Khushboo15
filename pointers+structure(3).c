#include <stdio.h>
struct Student
{
    char name[50];
    int roll;
    float marks;
};
int main()
{
    struct Student s[100];
    struct Student *p;
    int n, i, max;
    printf("Enter number of students: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        printf("\nEnter details of student %d:\n", i + 1);
        printf("Enter name: ");
        scanf("%49s", s[i].name);
        printf("Enter roll: ");
        scanf("%d", &s[i].roll);
        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
    }
    p = s;
    max = 0;
    for(i = 1; i < n; i++)
    {
        if((p + i)->marks > (p + max)->marks)
        {
            max = i;
        }
    }
    printf("\nTopper Details:\n");
    printf("Name = %s\n", (p + max)->name);
    printf("Roll = %d\n", (p + max)->roll);
    printf("Marks = %.2f\n", (p + max)->marks);
    return 0;
}

