#include <stdio.h>

int main()
{
    int outside, weather;
    printf("\nEnter '1'(=true) - if you are outside\nElse, Enter '0'(=false)\n:");
    scanf("%d", &outside);
    printf("\nEnter '1'(=true) - if you it's raining\nElse, Enter '0'(=false)\n:");
    scanf("%d", &weather);
    if (outside && weather) // Both clause have to be true, If one is false overall result is false
        printf("\nPlease use an umbrella.\n");
    else
        printf("\nDress normally.\n\n");
    
    return 0;
}
