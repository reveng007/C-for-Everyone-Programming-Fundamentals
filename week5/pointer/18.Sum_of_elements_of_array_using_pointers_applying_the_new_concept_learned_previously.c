/*

On previous program we learned that ---------------|
    -----------------------------------------------| 
    |
    V

***NOTE:

        Name of an array can be used as a pointer to the FIRST ELEMENT of an array.

So, using that concept to we will again solve the question which we had done previously in 16.Sum_of_elements_of_array_using_pointers.c

*/

#include<stdio.h>

int main(void)
{
    int a[] = {11, 22, 36, 5, 2};
    int sum = 0, *p;

    for(p = a; p <= (a + 4); p++) // as for the case of pointer, (p = a) is equal to (p = &a[0]) as Name of an array can be used as a pointer to the FIRST ELEMENT of an array.
        sum += *p;

    printf("Sum is %d", sum);
}

/*

***NOTE:

        It is true that we can use array names as pointers, but assigning a new address to them is not possible.

        For example:

        Assume base address to be 1000 in the array

        int main()
        {
            int a[] = {11, 22, 36, 5, 2};

            printf("%p", a++); -----> Output will be error --> step1: a = &a[0] => a = 1000 step2: a = a + 1 => a = (1000 + 1)byte = 1000 + (1 x 4) = 1004 

                                            ------> We can't change base address of an array,it is not allowed in case of array.

                                        // Here we are ASSIGNING value to the 1st element of the array by changing the base address of an array...
            return 0;
        }


        Instead of the above program we can use the below program:

        
        NOTE:    We have to understand the difference between accessing and assigning.

        Method 1.
        ---------

        Assume base address to be 1000 in the array

        int main()
        {
            int a[] = {11, 22, 36, 5, 2};

            printf("%p", a +1); -----> Here, We are Just accessing the value not assigning, OUTPUT will be : 22
            return 0;
        }  

        Method 2.
        ---------

                Assum base address to be 1000 in the array

        int main()
        {
            int a[] = {11, 22, 36, 5, 2};

            int *p = a; ----> p points to &a[0] => *p = 11 [ let, base address be 1000 and a = {11, 22, 33, 36, 5, 2} ]

            printf("%p", *(++p)); -----> Here, We are Just accessing the value not assigning, OUTPUT will be : 22
            
            ---> s1: p = p + 1 = (1000 + 1)byte = 1004 => *p = *(1004) = 22

            ---> s2: p = 1004 => *p = 22

            return 0;
        }


*/
