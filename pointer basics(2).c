#include <stdio.h>
int main()
{
    int x = 25;
    int *p = &x;
    *p = 100;
    printf("Value of x = %d", x);
    return 0;
}

