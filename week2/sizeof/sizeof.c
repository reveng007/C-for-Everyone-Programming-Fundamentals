
#include <stdio.h>

int main(void)
{
    printf("On my system\n");
    printf("int is %lu bytes.\n", sizeof(int));
    printf("long is %lu bytes.\n", sizeof(long));
    printf("char is %lu bytes.\n", sizeof(char));
    printf("floot is %lu bytes.\n", sizeof(float));
    printf("double is %lu bytes.\n", sizeof(double));
    printf("long double is %lu bytes.\n", sizeof(long double));

    return 0;
}