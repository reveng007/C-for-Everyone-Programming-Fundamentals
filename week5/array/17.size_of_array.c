#include<stdio.h>

int main(void)
{
    char str[] = "a b c";

    int n = sizeof(str)/sizeof(str[0]);

    printf("%d", n);

}

/*

OUTPUT : 6

Extra character is due to the fact of sentinel charecter present at the last index of the array.

+----+----+----+----+-----+-----+
| a  | ' '| b  | ' '|  c  |  \0 |
+----+----+----+----+-----+-----+
                             ^
                             |-----------Sentinel character '\0' -----> It will make ease while finding the end of the string.

*/
