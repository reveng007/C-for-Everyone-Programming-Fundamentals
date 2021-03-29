/*
Finding mid of the array
*/

#include <stdio.h>


int *find_Mid(int a[], int n) // name of function is find_Mid, but we took * operator as this function returns the address value of the obj, i.e. in this case 
{                             // we want the mid address of this array.
    return &a[n/2]; // int value returntype, for this case, n/2 = 2.5 but return type is int, so 0.5 value will be truncated ===> n/2 = 2 ===> a[2] = 3

    // But we want the address of the element we got, so ==> &a[2] ==> &a[n/2]
}



int find_Mid_number(int a[], int n) /// just for returning mid value 
{
    return a[n/2];
}



int main(void)
{
    int a[] = {1, 2, 3, 4, 5};
    int n = sizeof(a)/sizeof(a[0]);

    printf("address of location with format specifier %%p : %p\n", find_Mid(a, n));
    
    printf("address of location with format specifier %%d : %d\n", find_Mid(a, n));

    printf("address of location with format specifier %%x : %x\n", find_Mid(a, n));

    /*
    Difference between %d : ----> signed integer values.
    
                       %p : ----> is used to print the pointer values.
                       
                   and %x : ---> is used to print hexadecimal values.

    */

    printf("Value in mid location: %d\n", find_Mid_number(a, n));

    return 0;


}

/*

***NOTE: 

        Never ever try to return the address of an automatic/local variable

        For Eg:

            int *func() // returns address value so taken as *func()
            {
                int i=10; // i --> automatic/local variable 
                return &i; // Here we want to return the address of the variable i , whose scope is within *func() only. So when control returns to main()
                            // function then this function would already been popped out of the stack memory ==>  scope of *func() will also not exist 

                            // So, then we will have  a warning message looks something like this: "function returns address of local variable"
            }

            int main()
            {
                int *p = fun();
                printf("%d", *p);
            }
*/
