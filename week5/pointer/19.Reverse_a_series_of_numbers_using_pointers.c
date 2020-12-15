#include<stdio.h>

#define N 5

int main(void)
{
    int a[N], *p;

    printf("Enter %d elements in the array: ", N);
    for(p = a; p <= a + N-1; p++) // Acc. to this, Name of an array can be used as a pointer to the FIRST ELEMENT of an array. a = &a[0] = 1000(let)
    /*
    a + N-1 = 1000 + (5) - 1 = 1000 + (5 -1) x 4 byte = 1016

    */

    {
        scanf("%d", p);
    }

    printf("Elements in reverse order: \n");

    for(p = a+N-1; p >= a; p--)
    {
        printf("%d ", *p);
    }

    return 0;
}
