
#include <stdio.h>

int main(void) // int ----> program within returns integer
{
    int miles = 26, yards = 385;
    double kilometers;

    kilometers = 1.609 * (miles + yards / 1760.0 ); // n yard = n/1760 mile
    printf("\nA marathon is %lf kilometers.\n\n", kilometers);
    return 0;
}
