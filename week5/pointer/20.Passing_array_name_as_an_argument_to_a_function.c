#include <stdio.h>

int add(int b[], int len)
{
    int sum = 0;

    for(int i = 0; i<len; i++)
    {
        sum += b[i];
    }

    return sum;
}


int main(void)
{
    int a[] = {1, 2, 3, 4};
    int len = sizeof(a)/sizeof(a[0]);

    printf("Sum is: %d", add(a, len));
    /*               ^
                     |
                    We are not passing the whole array, we are just passing the base address of the array, as name of the array represents 
                    the base address of the array.
    */
    return 0;
}
