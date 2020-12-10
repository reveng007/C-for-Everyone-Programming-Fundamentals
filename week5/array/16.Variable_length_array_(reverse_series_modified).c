#include<stdio.h>

int main()
{
    int n;

    printf("Enter the number of elements to reverse: ");
    scanf("%d", &n);

    int a[n]; // ----> Variable length array, It is completely depended upon user, user can define his/her own length at the time of execution
    int i;

    printf("Enter all the %d elements: \n", n);
    for(i = 0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Elements in reverse order are: \n");
    for(i=n-1; i>=0; i--)
    {
        printf("%d", a[i]);
    }

    return 0;
}

/*

1. At the time of execution, we can decide the length fo the array.

2. No need to choose the fixed length while writing the code.

3. Even arbitary expressions are possible: 

    Example:
                int a[3*i+5];
                int a[k/7+2];
                int a[i+j];

***NOTE:
        variable length cannot have static storage duration ----> A static variable is a variable that persists its value across the various function calls.

                                                                        static data_type variable_name;  

        Variable length of array doesn't have any initializer which is obvious
*/
