#include <stdio.h>
struct student
{
    char name[20];
    int roll;
    float marks;
};
// Function 1: Add grace marks
void addGrace(struct student a[], int n, float g)
{
    int i;

    for(i = 0; i < n; i++)
    {
        a[i].marks = a[i].marks + g;
    }
}
// Function 2: Count passed students
int countPass(struct student a[], int n, float cut)
{
    int i, count = 0;
    for(i = 0; i < n; i++)
    {
        if(a[i].marks >= cut)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    struct student a[50];
    int n, i, passed;
    printf("Enter number of students: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        printf("Enter name, roll and marks: ");
        scanf("%s %d %f", a[i].name,
              &a[i].roll, &a[i].marks);
    }
    addGrace(a, n, 5);
    printf("\nAfter grace marks:\n");
    for(i = 0; i < n; i++)
    {
        printf("%s %d %.0f\n",
               a[i].name, a[i].roll, a[i].marks);
    }
    passed = countPass(a, n, 40);
    printf("Passed = %d", passed);
    return 0;
}

