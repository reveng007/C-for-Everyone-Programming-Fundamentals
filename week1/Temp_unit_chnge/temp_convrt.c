
#include <stdio.h>

int main(void)
{
    int fahrenheit, celsius;

    printf("Please enter fahrenheit as an integer: ");
    scanf("%d", &fahrenheit);
    celsius = (fahrenheit - 32)/1.8 ; // --> 1/(5/9) ~ 1.79999999, Here actually doubled value will be rounded off to int value
    printf("\n %d fahrenheit is %d celsius.\n ",
            fahrenheit, celsius);
    return 0;
}