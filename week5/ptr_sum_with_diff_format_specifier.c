#include <stdio.h>

int main(void)
{
    int grades[] = {78, 67, 92, 83, 88};

    int len = sizeof(grades)/sizeof(grades[0]);

    double sum = 0.0;

    double *ptr_to_sum = &sum;

    int i;

    printf("My grades are:\n");

    for(i = 0; i < len ; i++)
    {
        printf("%d\t", grades[i]);
        sum += grades[i];
    }

    printf("\nMy average grades is %.2f\n\n", sum/len);

    printf("Length of the array: %d\n", len);

    printf("Sum is at %p, or %lu and is %lf\n",
            ptr_to_sum,
            ptr_to_sum,
            *ptr_to_sum);

    printf("Grades are at at %lu to %lu\n", grades, grades+5);

}
