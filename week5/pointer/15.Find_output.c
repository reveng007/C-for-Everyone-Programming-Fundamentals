#include <stdio.h>

int main()
{
    int a[] = {5, 16, 7, 89, 45, 32, 23, 10};
    int *p = &a[1], *q = &a[5];

    printf("%d\n", *(p+3)); // ----> 45
    printf("%d\n", *(q-3)); // ----> 7
    printf("%d\n", q - p);  // ----> 4  Assuming, Base address = 1000 ---> So, 1020 - 1004 = 16 bytes = 16/4 = 4
    printf("%d\n", p < q);  // ----> True ---> 1
    printf("%d\n", *p < *q); // ---> True ---> 1
    
    return 0;
}
