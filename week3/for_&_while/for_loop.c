#include <stdio.h>

int main(void)
{
    int blanks = 0, digits = 0, total_chars = 0;
    int c; // use for int value of character
    
/*Initialization     termination         increament/decreament
(which is already    condition              |
done)    |           |                      |
         V           V                      V                  */
    for (; ( c = getchar ()) != EOF; total_chars++)
    {
        if (c == ' ')
            ++blanks;
        else if ( c >= '0' && c <= '9')
            ++digits;

    }
    printf(" blanks = %d, digits = %d, total_chars = %d\n\n",
            blanks, digits, total_chars);
    
    return 0;
}

/* This program or 'wc' command in linux, will always result to give an extra charcter as result as we can not see trailing new line.
   
   For Confirmation use: $ cat <file> | hexdump -c
*/
