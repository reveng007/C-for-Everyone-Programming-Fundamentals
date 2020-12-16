/*

pre/post increaments:

                Precedence: Post > Pre

                a = ++b; pre
                    ==> s1: b = b+1
                    ==> s2: a = b

                a = b++; post
                    ==> s1: a = b 
                    ==> s2: b = b+1
*/


#include<stdio.h>

int post_incre(int a[])
{
    printf("%d\n", *(a++)); 
    // p++ => s1: a = 1000 ==> *a = *(1000) = 5  | s2: a = a + (1 x 4) [as in this case it is array] = 1000 + 4 = 1004 ==> *p = *(1004) = 16
    // so, *(p++) = 5
    printf("%d\n", *a); // In next step, *a = 16
}


int pre_incre(int a[])
{
    printf("%d\n", *(++a)); 
    // ++p => s1: a = a + (1 x 4) [as in this case it is array] = 1004 ==> *a = *(1004) = 16  | s2: a = 1004 ==> *a = *(1004) = 16
    // so, *(++a) = 16
    printf("%d\n", *a); // In next step, *a = 16
}

int post_decre(int a[])
{
    int *p = &a[2]; // Suppose base address of the array is 1000

    printf("%d\n", *(p--)); 
    // p-- => s1: p = 1008 ==> *p = *(1008) = 7  | s2: p = p - (1 x 4) [as in this case it is array] = 1008 - 4 = 1004 ==> *p = *(1004) = 16
    // so, *(p--) = 7
    printf("%d\n", *p); // In next step, *p = 16
}


int pre_decre(int a[])
{
    int *p = &a[2]; // Suppose base address of the array is 1000

    printf("%d\n", *(--p)); 
    // --p => s1: p = p - (1 x 4) [as in this case it is array] = 1004 ==> *p = *(1004) = 16  | s2: p = 1004 ==> *p = *(1004) = 16
    // so, *(--p) = 16
    printf("%d\n", *p); // In next step, *p = 16
}

int main()
{
    int a[] = {5, 16, 7, 89, 45, 32, 23, 10};
    
    // Suppose base address of the array is 1000
    
    printf("Post Increment:\n");
    post_incre(a);

    printf("Pre Increment:\n");
    pre_incre(a);

    printf("Post Decrement:\n");
    post_decre(a);

    printf("Pre Decrement:\n");
    pre_decre(a);

    return 0;
}
