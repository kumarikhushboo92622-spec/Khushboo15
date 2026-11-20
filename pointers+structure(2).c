#include <stdio.h>
struct Student
{
    char name[50];
    int roll;
    float marks;
};
void update(struct Student *s, float m)
{
    s->marks = m;
}
int main()
{
    struct Student s;
    printf("Enter student name: ");
    scanf("%49s", s.name);
    printf("Enter roll number: ");
    scanf("%d", &s.roll);
    printf("Enter marks: ");
    scanf("%f", &s.marks);
    printf("\nBefore Update:\n");
    printf("Name = %s\n", s.name);
    printf("Roll = %d\n", s.roll);
    printf("Marks = %.2f\n", s.marks);
    update(&s, 95.0);
    printf("\nAfter Update:\n");
    printf("Name = %s\n", s.name);
    printf("Roll = %d\n", s.roll);
    printf("Marks = %.2f\n", s.marks);
    return 0;
}

