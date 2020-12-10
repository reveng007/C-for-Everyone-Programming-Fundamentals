/*
Write a program to check whether any digit in a number appears more than once:

                               +---+---+---+---+---+---+---+---+---+---+
if number = 6778889 ------->   | 0 | 0 | 0 | 0 | 0 | 0 | 1 | 2 | 3 | 1 |   Here, frequency(6) = 1, freq(7) = 2, freq(8) = 3, freq(9) = 1
                               +---+---+---+---+---+---+---+---+---+---+
                                 0   1   2   3   4   5   6   7   8   9    

*/

#include<stdio.h>

int main(void)
{
    long n;
    int rem;
    int arr[10] = {0};

    printf("Enter a Number: ");
    scanf("%ld", &n);

    while(n>0)
    {
        rem = n%10;
        arr[rem] = arr[rem] + 1;
        printf("Value at index: %d is %d\n",
                rem, (arr[rem]));
        n = n/10;
    }

    return 0;
}
