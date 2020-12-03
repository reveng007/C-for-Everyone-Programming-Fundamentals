#include <stdio.h>

/* F seq. = 0,1,1,2,3,5.....

   F(n) = F(n th - 1) + F(n th - 2)
*/

long fibonacci(int n)
{
    long f2 = 0, f1 = 1, f_old;
    int i;

    for(i = 0; i < n; i++)
    {
        f_old = f2;    // 1st loop: < ---   f_old = 0
        f2 = f2 + f1; //                    f2 = 0 + 1 = 1
        f1 = f_old;                    //   f1 = 0, f2 = 1 
    }
    return f2;
}

long recursive_fibonacci(int n)
{
    if (n <= 1)
        return n;
    else
        return(recursive_fibonacci(n - 1) + recursive_fibonacci(n - 2));
}

int main(void)
{
    int how_many = 0, i;
    printf("I want table of fibonacci up to n: ");

    scanf("%d", &how_many);
    printf("\n fibonacci\n");

    for (i = 0; i < how_many; i++)
        printf("\n%d\t %ld %ld\n", i, fibonacci(i), recursive_fibonacci(i));
}

/* Recurssion will gradually slow down with increase in computational numbers

Disadvantage:

Takes lots of memory

Takes extra amount of time

*/
