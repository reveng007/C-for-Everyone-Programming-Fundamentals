/*
Value of operator or indirectional operator or dereference operator or star operator(*)

is an operator that is used to access the value stored at the location pointed by the pointer.

For example:               x
                        +-----+
    1. int x =5;        |  5  |
                        +-----+
                         1000 ----> Base address
       int *ptr;        
       
                          ptr
                        +-----+
                        |     |
                        +-----+
                         2000 ----> Base address
       
       
       ptr = &x; ------|
                       |------------------------------------> ptr = address/ Base of address of x
                                                                  = 1000
                                                                               ptr
                                                                    =====>  +--------+
                                                                            | 10000  |
                                                                            +--------+    
                                                                               2000

                                                                    That means:
       |-----------------------------------------------------------------|
       |
       V
         x
      +-----+
      |  5  |  <------------------------------|                        ptr
      +-----+                                 |____________________+---------+
        1000                                                       |  1000   |
                                                                   +---------+
                                                                        2000
     
     printf("%d", *ptr);
                  |-------------------> star operator, will simple go to the ptr and see the value present within it, i.e. the address of the object
                                        (in this case it is 'x') and then will reach that object and take 
                                        what is stored in that object, i.e. 'x' in this case.

                                                          x
                                                        +-----+
                                                        |  5  |  <------------------------------|                       ptr
                                                        +-----+                                 |___________________+---------+
                                                         1000                                                       |  1000   |
                                                                                                                    +---------+
                                                                                                                        2000

    *ptr --> means ??

     |---> Step1. ptr: It will go to 'ptr' varible to see the value within it ---> It is actually done due to the presence of 'ptr'

           Step2. *ptr: Then due to presence of '*' with 'ptr', it will redirect  itself to that particular value stored within 'ptr'. Basically treating it as an address,
                        it reaches address '1000', which is the base address of variable 'x' (here, which is the object), to store the value present within x variable.

                                                                                                                    
***NOTE:

    We can also change the value of the object pointed by the pointer.

        For example:               x
                                +-----+
            1. int x =5;        |  5  |
                                +-----+
                                 1000 ----> Base address
                       
            
                                ptr
                                +-----+
                                |     |
                                +-----+
                                2000 ----> Base address
            
            
               int *ptr = &x; ------|
                                    |-------------------------------> ptr = address/ Base of address of x
                                                                          = 1000
                                                                                      ptr
                                                                            =====>  +--------+
                                                                                    | 10000  |
                                                                                    +--------+    
                                                                                       2000

                                                                         That means:
            |-----------------------------------------------------------------|
            |
            V
               x
            +-----+
            |  5  |  <------------------------------|                        ptr
            +-----+                                 |______________________+---------+
              1000                                                         |  1000   |
                                                                           +---------+
                                                                              2000
               
               *ptr = 4; ---> This implies====>    x
                                                +-----+       So, with the help of this statement, we can change the valut of 10 --> 4.
                                                |  4  |  <------------------------------|                           ptr
                                                +-----+                                 |______________________  +---------+
                                                 1000                                                            |  1000   | 
                                                                                                                 +---------+
                                                                                                                    2000
***NOTE:

    1. Never apply the indirection/star operator to the uninitialized pointer.

    For eg:

        int *ptr;
        printf("%d", *ptr);

        |-----> It can't be done as before applying the * operator we must have to assign 'ptr' to some location/address of a variable

                As dereferance / * operator redirects to that value of location which is present within ptr variable.

                If 'ptr' doesnot contain any value (i.e. address of a varible),then how it can redirect to that location....

    
    2. Assigning value to a uninitialized pointer is dangerous

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


#include <stdio.h>
 
int main(void)
{ 
    int x;            /* A normal integer*/
    int *ptr;           /* A pointer to an integer ("*p" is an integer, so p
                       must be a pointer to an integer) */
 
    ptr = &x;           /* Read it, "assign the address of x to p" */
    printf("Enter value of x: ");
    scanf( "%d", &x );          /* Put a value in x, we could also use p here */
    printf("So value of x is %d\n", *ptr ); /* Note the use of the * to get the value of the object*/
    
    printf("And address of x is: %d\n", ptr); /* Note only p is used to ouput the address of x */

    *ptr = 1000; // changing the value of the object pointed by the pointer

    printf("So value of x is %d\n", *ptr ); /* Note the use of the * to get the value of the object*/
    
    printf("And address of x is: %d\n", ptr); /* Note only p is used to ouput the address of x */

    printf("Notice that the address of x is same even after the value of x is changed\n");

    printf("Value of x: %d\n", x);

    printf("Value of x: %d", *(&x)); // x = *(&x)

    return 0;
}

/*

***NOTE:

        Printing the value of *(&i) is same as printing the value of i

*/

