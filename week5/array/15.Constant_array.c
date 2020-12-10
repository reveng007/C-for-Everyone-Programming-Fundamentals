/*
Either 1D or mullti-D arrays can be made constant by starting the declaration with the keyword 'const'


For example:

const int a[10] = {1,2,3,4,5,6,7,8,9,20};
                    |
                    |-----> We won't be able to change the values of this array
*/
#include<stdio.h>

int main(void)
{
    const int a[10] = {1,2,3,4,5,6,7,8,9,10};

    a[1] = 45;
    
    return 0;
}

/* It throws an error: " error: assignment of read-only location ‘a[1]’ " */

/*
Advantage of const array:
-------------------------

1. It assures us that the program will not modify the array which may contain some valuable information.

2. It also helps the compiler to catch errors by informing that there is no intension to modify this array.

*/
