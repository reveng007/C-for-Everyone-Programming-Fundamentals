#include <stdio.h>

int main(void) // int ----> program within returns integer
{
    int miles = 26, yards = 385; // declaration of variables along
    double kilometers;           // with initialization

    kilometers = 1.609 * (miles + (yards / 1760.0) ); // n yard = n/1760 mile ----> (   2nd pref.   (1st pref.)     )
    /*                      |     |    |______|      |
                            |     |       |          |
                            V     |       V          |
                           int    |floating pt divide|
                                  |__________________|
                                          |
                                          V
                                        double

    int + double ==> gives double 
    */

    printf("\nA marathon is %lf kilometers.\n\n", kilometers);
    return 0;
}
