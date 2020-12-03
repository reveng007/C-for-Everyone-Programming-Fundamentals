#include <stdio.h>

/* long allows it to work for upto 20 */
long int factorial(int n)                                // Factorial with end
{
    long f = 1;           
    int i;

    for(i = 1; i <= n; i++)
        f = f * i;
    return f;
}

long int recursive_factorial(int n)                         // Factorial with no end
{
    if (n == 1)
        return 1;
    else
        return(recursive_factorial(n - 1) * n);
}

int main(void)
{
    int how_many = 0 , i;
    printf("I want a table of factorial up to n: ");
    scanf("%d", &how_many);

    printf("\n factorials\n");
    printf("***NOTE:\nWhen declaring Factorial() why we don't use double factorial() so that we do not have interger overflow???\nNaaah!!!, It's due to that fact it gives a problem in accuracy. On most system, double only gives 6 sig. fig.");

    for(i = 1; i <= how_many; i++)
        printf("\n%d\t %ld\n", i, factorial(i)); // calling factorial()
    printf("\n\n");
    for(i = 1; i <= how_many; i++)
        printf("\n%d\t %ld\n", i, recursive_factorial(i)); //  calling recursive_factorial
    printf("\n\n");
    return 0;
}


/* ***NOTE: 
            When declaring Factorial() why we don't use double factorial() so that we do not have interger overflow???
            Naaah!!!, It's due to that fact it gives a problem in accuracy. On most system, double only gives 6 sig. fig.
*/
