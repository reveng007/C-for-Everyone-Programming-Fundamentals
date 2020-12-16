#include<stdio.h>

int main(void)
{   
    int grades[] = {78, 67, 92, 83, 88};

    int len = sizeof(grades)/sizeof(grades[0]);

    double sum = 0.0;

    int i;

    printf("My grades are:\n");

    for(i = 0; i < len ; i++)
    {
        printf("%d\t", grades[i]);
        sum += grades[i];
    }

    printf("\nMy average grades is %.2f\n\n", sum/len);

    printf("Length of the array: %d", len);
}
