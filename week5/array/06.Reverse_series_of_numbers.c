/*
Print in reverse order:

34 56 54 32 67 89 90 32 21


Assume that all this numbers are stored in an array.


*/

#include<stdio.h>

int main(void)
{
    int i;
    int arr[] = {34, 56, 54, 32, 67, 89, 90, 32, 21};

    int len = sizeof(arr)/sizeof(arr[0]);

    // Original Order
    for(i = 0; i<=(len-1); i++)
    {   
        printf("%d ", arr[i]);
    }
    printf("\n\n");
    
    // Reverse Order
    for(i = (len-1); i >=0; i--)
    {
        printf("%d ", arr[i]);
    }   

    return 0;
}
