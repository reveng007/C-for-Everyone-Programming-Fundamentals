/*

Use of relational operators(<,>, <=, >=) and equality operators (==, !=) to compare pointers.

Only possible when both pointers point to the same array.

Ouput always depends on the positions of both the pointers.


*/

#include <stdio.h>

int main()
{
    int a[] = {1, 2, 3, 4, 5, 6};
    
    int *p = &a[3];
    int *q = &a[5];

    printf("%d\n", p<=q); // output is True ---> 1
    printf("%d\n", p>=q); // output is False ---> 0

    q = &a[3];

    printf("%d", p == q); // output is True ---> 1

    return 0;
}
