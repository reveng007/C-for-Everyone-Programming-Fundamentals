
#include <stdio.h>

int main(void)
{
    short short_a = 5;
    int normal_a = 67;
    unsigned unsingned_a = 67u;
    long long_a = 67l;
       
    /*                __
    %hd --> h -> short |
            d -> int   |---> placeholder
    */
    printf("short_a = %hd, divide by int 2 in %d\n", short_a, short_a/2); // Result is converted to int
    
    printf("short_a = %hd, divide by float 2 in %lf\n", short_a, short_a/2.0); // Result is converted to longfloat
    
    printf("67 as a char is '%c'\n", normal_a);
    printf("67 is interpreted as ASCII value of 67, which is 'C'\n");
    
    printf("sizes in bytes of short, int, unsigned, and long on my machine: ");
    
    printf("%lu,  %lu , %lu , %lu\n", sizeof(short_a), sizeof(normal_a),
            sizeof(unsingned_a), sizeof(long_a) );

    return 0;
}
