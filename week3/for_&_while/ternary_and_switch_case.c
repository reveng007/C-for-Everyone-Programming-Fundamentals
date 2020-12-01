#include <stdio.h>

int main()
{
    int speed;
    printf("\nEnter your speed as an interger: ");
    scanf("%d", &speed);
    //        expr         expr1 |expr2=expr | expr1  expr2
    speed = (speed <= 65)? (65): (speed <= 70)? (70): (90); // -----> Nested Turnary operators
    
    switch (speed)
    {
    case 65: printf("\nNo Speeding Ticket\n\n");
        break;
    case 70: printf("\nSpeeding Ticket\n\n");
        break;
    case 90: printf("\nExpensive Speeding Ticket\n\n");
        break;
    default: printf("\nIncorrect speed\n\n");
        break;
    }
    return 0;
}
