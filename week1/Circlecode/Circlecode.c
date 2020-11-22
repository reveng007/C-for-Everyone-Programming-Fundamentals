#include <stdio.h>

// Here, #define is a pre-processor directive. 
// It is used to define something
#define PI 3.14159

/* Like here we have defined that PI is 3.14. So, before going to the compiler, 
if 'PI' comes anywhere in the program, it will be replaced by 3.14.
*/

int main()
{
    double area = 0.0, radius = 0.0;
    printf("Enter radius: ");
    scanf("%lf", &radius);
    area = PI * radius * radius;
    printf("Radius of %lf meters\nArea is %lf sq. meters\n", radius, area);
    return 0;
}
