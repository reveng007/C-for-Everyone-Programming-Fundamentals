/*
Taken from : https://www.youtube.com/watch?v=CkXjf6_8DLU&t=272s

See: https://www.youtube.com/playlist?list=PLu0W_9lII9ahIappRPN0MCAgtOu3lQjQi
*/

#include <stdio.h>
#define SIZE 5

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}


void print_array(int data[], int how_many)
{
    for(int i = 0; i < how_many; i++)
    {
        printf("%d ", data[i]);
    }
}


void bubble_Sort(int data[], int how_many)
{
    for(int i = 0; i < how_many; i++) // For Number of passes
    {
        for(int j = 0; j < how_many-1-i; j++) // For comparison in each pass
            if(data[j] > data[j+1])
            {
                swap(&data[j], &data[j+1]);
            }
    }
}


int main(void)
{
    int arr[SIZE] = {78, 67, 92, 83, 88};

    printf("Printing the array before sorting:\n");
    print_array(arr, SIZE); // Printing the array before sorting
    printf("\n\n");
    bubble_Sort(arr, SIZE);     // Function to sort the array


    printf("Printing the array after sorting:\n");
    print_array(arr, SIZE);  // Printing the array after sorting
    printf("\n\n"); 

    return 0;
}
