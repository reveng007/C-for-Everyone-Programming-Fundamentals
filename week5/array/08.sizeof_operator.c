/*

int a[] = {2, 2, 2, 23, 3, 13, 49, 11, 4, 14, 42, 14, 12, 4, 56, 57, 47, 78, 86, 70, 870, 07, 97, 9, 967, 87, 5, 6, 7, 4, 456, 653, 34, 6, 522, 12, 132, 
                                                                                                                                                    133, 124};

number of elements = sizzeof(name_of_arr)/sizeof(name_of_arr[0])

Number of elements = size of whole array in bytes / (size of array[0]) ---> index value can be any value as all values within an array has same data type
                                                            |
                                                            V                                                    
                                                    size of any value in bytes in array

*/

#include<stdio.h>

int main(void)
{
    int a[] = {2, 2, 2, 23, 3, 13, 49, 11, 4, 14, 42, 14, 12, 4, 56, 57, 47, 78, 86, 70, 870, 07, 97, 9, 967, 87, 5, 6, 7, 4, 456, 653, 34, 6, 522, 12, 132, 
    133, 124};

    printf("%d", sizeof(a)/sizeof(a[0]));
}
