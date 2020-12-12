/*
Assigning value to a uninitialized pointer is dangerous

    For eg:

        int *ptr;
        *ptr = 1;

        |----> Here *ptr is not pointing to anylocation, but we are changing the value of the object pointed by the pointer

               How is this possible??

               It is not possible ;)
               |
               |---------------->  It will throw a segmentation fault.


                ******NOTE:
                            segmentation fault:

                            A segmentation fault occurs when a program attempts to access a memory location that it is not allowed to access,
                            or attempts to access a memory location in a way that is not allowed (for example, attempting to write to a 
                            read-only location, or to overwrite part of the operating system).
        
*/

#include<stdio.h>

int main(void)
{
    int i = 8;
    int *p = &i;
    int *q;

    printf("value of p(i.e. address of i):%d | value of i and *p: %d\n", p, *p);

    printf("value of q .i.e.value of p(i.e. address of i):%d | value of *q: %d\n", q, *q);

    printf("\n");
    

    printf("After assigning value to q pointer\n");
    printf("-------------------------------------\n");

    printf("\n");

    q = p;  // ---> initialised q pointer 
    *q = 5; // changing value of obj. --------------> 

    printf("value of p(i.e. address of i):%d | value of i and *p: %d\n", p, *p);

    printf("value of q .i.e.value of p(i.e. address of i):%d | value of *q: %d", q, *q);

}
