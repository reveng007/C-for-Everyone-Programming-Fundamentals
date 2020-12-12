
#include<stdio.h>

void min_max(int arr[], int len, int *min, int *max)
{
    *min = *max = arr[0];
    int i;
    for(i = 1; i<len; i++)
    {
        if(arr[i] > *max)
            *max = arr[i];
        else if (arr[i] < *min)
            *min = arr[i];
    }
}

int main(void)
{
    int a[] = {23, 4, 21, 987, 45, 32, 10, 123, 986, 50, 3, 4,5};
    
    int min, max;
    /*
    1. We are passing the copies of the variables, min and max to the function min_max

       not the original varible. So, when we chnage the the value of the copy these varibles, it will not get reflected to the original variables

       present within main function, i.e. what is called "Call by Value", as a seperate/new location is created for that copy in stack memory and when it returns to 

       the main function where it is called, the memory which was created in stack by the function min_max, gets popped,i.e. get removed/flushed out, so the

       scope/ life time of that particular variable dies at that point when control returns to the main function where it is called.

       In this way, values will not get reflected to the original variables in main function.

    
    2. But we want HERE, to change the value of these variables permatently from min_max function. So, that's why we are passing the address of 
    
       the variables, min and max to min_max function, i.e. what is called "Call by referance". So, when we chnage the value of these varibles and assign those 
       
       new values to it's original location, it will definitely get reflected to the original variables present within main function, So when we go into the 
       
       function min_max no new/seperate location is created in the stack memory. So there is no point/ question of scope/life time of new varibles, 
       
       the old/original variables gets changed and it's life in within main function as well as in min_max function. In this way, we chnage the value 
       
       of these varibles and assign those new values to it's original location. That is the reason why:

       
       We used the original location of varibles creted in main funtion to pass to min_max function:

       &min and &max in main function AND *min and *max in min_max function

    */
    
    int len = sizeof(a)/sizeof(a[0]);

    //printf("Minimum value in the array is: %d\nMaximum value is: %d", min, max);

    min_max(a, len, &min, &max);

    /*int min = 0, max = 0;

    min_max(a, len, min, max);*/

    printf("Minimum value in the array is: %d\nMaximum value is: %d", min, max);

    return 0;
}
