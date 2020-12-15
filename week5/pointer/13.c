#include<stdio.h>

int main()
{
    int a[] = {5, 16, 7, 89, 45, 32, 23, 10};
    int *p = &a[2];

    printf(" value of a is equal to &(a[0])");

    printf("%d\n", a);

    printf("%d\n", &(a[0]));

    return 0;
}
