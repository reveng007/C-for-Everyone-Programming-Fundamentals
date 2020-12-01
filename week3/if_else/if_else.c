#include <stdio.h>

int main()
{
    long speed;
    printf("\nEnter speed as an integer: ");
    scanf("%ld", &speed);
    if (speed < 65)
        printf("\nNo speeding Ticket\n\n");
    else
        printf("\nSpeeding Ticket\n\n");
    
    return 0;
}
