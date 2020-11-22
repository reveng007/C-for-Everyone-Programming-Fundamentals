/*
Modify: 

1.Promt the user to input input miles + yards ---> to Km
*/


#include <stdio.h>

int main(void)
{
    int miles, yards;
    double km;

    printf("Enter miles: ");
    scanf("%d", &miles);
    printf("Enter yards: ");
    scanf("%d", &yards);

    km = 1.609 * (miles + (yards/1760));

    printf("\nResult in kilometer: %lf", km);
    return 0;
}