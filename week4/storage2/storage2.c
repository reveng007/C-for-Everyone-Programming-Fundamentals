#include <stdio.h>
extern int reps;

int reps = 0;

/*  the extern keyword extends the function’s visibility to the whole program, the function can be used (called) anywhere in any of 
the files of the whole program, provided those files contain a declaration of the function
*/
void f(void)
{
    static int called = 0; // value will not change
    printf("f called %d\n", called);
    called++;
    reps = reps + called;
}

int main(void)
{
    auto int i = 1;
    const int Limit = 0;
    for (i = 1; i < Limit; i++)
    {
        printf("i local = %d, reps global =%d\n", i, reps);

        f();
    }

    return 0;
}
