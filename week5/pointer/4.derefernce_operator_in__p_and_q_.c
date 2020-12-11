/*

***NOTE:

    (q = p) != (*q = *p)
    ----------------------

    int i = 10, j = 20;          
                                                               P                              i
    int *p, *q;                                             +------+                        +----+
                                                            | 1000 | ---------------------> | 10 |
    p = &i;                                                 +------+                        +----+
    q = &j;                                                                                  1000

                                                                    q                             j
                                                                +------+                        +----+
                                                                | 2000 | ---------------------> | 20 |
                                                                +------+                        +----+
                                                                                                2000

                                       q                          j
    *q = *p; =================>     +-------+                 +--------+
                                    |  2000 |---------------> |  10    |
                                    +-------+                 +--------+ 
                                                                1000
*/

#include<stdio.h>

int main(void)
{
    int i = 10, j = 20;
    int *p, *q;

    p = &i;
    q = &j;

    printf("p = %d\n", p);
    printf("q = %d\n", q);

    printf("Value of i: %d\n", i);
    printf("Value of j: %d\n", j);

    printf("*p = %d\n", *p);
    printf("*q = %d\n", *q);
    
    printf("\n");
    
    *q = *p;

    printf("After *q = *p\n");
    printf("--------------\n\n");

    printf("p = %d\n", p);
    printf("q = %d\n", q);

    printf("Value of i: %d\n", i);
    printf("Now, Value of j has become: %d\n", j);
    
    printf("*p = %d\n", *p);
    printf("Now, *q = %d\n", *q);

    return 0;
}
