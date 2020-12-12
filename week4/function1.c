#include <stdio.h>
/*          ____|________
            |Declaration|
            |           |    */
void wrt_very(int count) // defining a function, This function will not return anything as return type is void
{
    while(count > 0)
    {
        printf("\nvery");
        count--;
    }
    printf(" much. \n\n");
}

int main(void)
{
    int repeat = 0;
    printf("How strong is your love 1-10? :");
    scanf("%d", &repeat);
    printf("\nI love you very");
    wrt_very(repeat -1 ); // calling function

    /*
    Function encapsulation:

    as within function another
    funtion is called
    */

    return 0;
}
