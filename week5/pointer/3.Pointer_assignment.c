/*                                       p
                                     +---------+
int i = 10;                 _|====>  |   1000  |--------------------|
                            |        +---------+                    |
int *p, *q;                 |                                       |
                            |                                       V
p = &i; ====================|          q                          i  
                                    +------+                    +------+
q = p   =========================>  | 1000 |------------------> |  10  |
                                    +------+                    +------+
                                                                   1000
printf("%d %d", *p, *q);

*/

#include<stdio.h>

int main(void)
{
    int i = 10;
    int *p, *q;

    p = &i;
    q = p;

    printf("*p points to i: %d\n*q also points to i: %d", *p, *q);
}