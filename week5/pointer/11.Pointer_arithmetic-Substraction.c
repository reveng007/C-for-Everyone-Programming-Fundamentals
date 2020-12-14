/*

Question1:
----------

Step1:
------
  p 
 +-----+
 |     |----------------------|
 +-----+                      |
                              V
             +----+----+----+----+----+----+----+----+
          a  |    |    |    |    |    |    |    |    |
             +----+----+----+----+----+----+----+----+
               0     1    2    3    4   5     6    7
             1000 1004 1008 1012 1016 1020 1024 1028


Base address is 1000

int *p;

Let, p = &a[3] ; 


Step2:
-------


 substracting 3 from the pointer:

 answer:

p = value of p at index 3

( p = 3 - 3 ) = &a[3 - 3]

New index: 3 - 3 = 0

New address: 1012 - 3 x 4 = 1000



    p 
 +-----+
 |     |-------|
 +-----+       |
               V
             +----+----+----+----+----+----+----+----+
          a  |    |    |    |    |    |    |    |    |
             +----+----+----+----+----+----+----+----+
               0     1    2    3    4   5     6    7
             1000 1004 1008 1012 1016 1020 1024 1028


Base address is 1000


Question2:
-----------

substraction betweeen 2 pointers:

     p                                                            q
 +--------+                                                   +--------+
 |        |-------------|                   |-----------------|        |
 +--------+             |                   |                 +--------+
                        V                   V
            +----+----+----+----+----+----+----+----+
          a |    |    |    |    |    |    |    |    |
            +----+----+----+----+----+----+----+----+
              0     1   2    3    4    5    6    7
            1000 1004 1008 1012 1016 1020 1024 1028

Base address is 1000

        q - p = 4         or  p - q = -4



For address,

            p = 1008   and q = 1024


            q - p = 16 bytes [as it is substraction of the address]

        ==> q - p = 16/4 = 4 <---- index of the element


*/

/*
***NOTE: 

        Performing arithmetic on pointers which are NOT pointing to an ARRAY element leads to undefined behaviour.


        For Eg:
*/

#include<stdio.h>


int main()
{
    int i = 10;
    int *p = &i;

    printf("%d\n", &i);
    printf("%d\n", (p+3));
    printf("NOTICE, There is a difference of 3 x 4 = 12 b/w %d %d\n", 
            &i, (p+3));

    printf("%d\n", *p);
    printf("%d\n", *(p+3));//Here after adding 3. pointer will move 3 position to the forward direction BUT, we don't know what is there in the subsiquent indices.
    printf("%d\n", (p+3));

    return 0;
}

/*

If two pointers are pointing to different arrays then performing substraction between them leads to undefined behaviours


int main()
{
    int a[] = {1, 2, 3, 4};
    int b[] = {10, 20, 30, 40};

    int *p = &a[0];
    int *q = &b[3];

    printf("%d", q - p);

    return 0;

    -----------------> Provides undefined behaviour
}


*/

