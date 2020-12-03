#include<stdio.h>

int foobar(int n)
{
    n = n + 1;
    return n;
}

int main()
{   
    int k = 6;
    printf("foobar(k) = %d, k = %d", foobar(k), k);

    printf("\n\t^\n\t|__ K is call by value so it cannot be changed in the calling environment");
}
