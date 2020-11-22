
#include <stdio.h>

int main(void)
{
    float a, b, c, sum = 0;
    printf("Input three floats: ");
    scanf("%f%f%f", &a, &b, &c);
    printf("a = %f, b = %f, c = %f\n", a, b, c);
    sum = a + b + c;
    printf("sum = %f\n\n", sum);
    return 0;
}

/* int main() vs. int main(void)

1. In C++, there is no difference, both are same.


2. main (void) ----> clearly specifies that main can only be called without any parameter.

   main () ---->  doesn’t specify any argument, it means that the function can be called with 
   any number of parameters or without any parameters.

*/

