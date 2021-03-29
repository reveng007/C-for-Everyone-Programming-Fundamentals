/*

int a[] = {23, 45, 6, 98};


int min, max;
min = max = a[0];

for i = 1 to 3;

1>  if a[i] < min then 
        min = a[i]


2>  if a[i] > max then
        max = a[i]

*/

#include<stdio.h>

int main(void)
{
    int n;
    printf("Enter Number of elements you want to enter : ");
    scanf("%d", &n);

    int a[n];

    int i;

    // Creating array
    for(i = 0; i<n; i++)
    {
        printf("Enter elements within array to find out smallest and largest number : ");
        scanf("%d", &a[i]);
        
    }

    printf("\n");

    // Printing aray
    printf("a[n] = ");
    for(i = 0; i<n; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\n");

    // min and max
    int min, max;

    min = max =a[0];

    for(i=1; i<n; i++) // starting point is, i=1 i.e. a[1] Because we are already taking a[0] value while assigning/declaring.
    {
        if (a[i] < min)
            min = a[i];
    }

    for(i=1; i<n; i++) // starting point is, i=1 i.e. a[1] Because we are already taking a[0] value while assigning/declaring.
    {
        if (a[i] > max)
            max = a[i];
    }

    printf("Min: %d and Max: %d", min, max);

    return 0;
}   
