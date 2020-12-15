/*

***NOTE:

        Name of an array can be used as a pointer to the FIRST ELEMENT of an array.

*/

#include<stdio.h>

int func1(int a[])
{
    *(a+1) = 20;  // *(1000 + 1)byte = 20 => *(1000 + 1 x 4) = 20 => *(1004) = 20 ==> a[1] = 20

    return a[1];
}

int func2(int a[])
{
    *(a+2) = 30;  // *(1000 + 2)byte = 30 => *(1000 + 2 x 4) = 30 => *(1008) = 30 ==> a[2] = 30

    return a[2];
}


int main(void)
{
    int a[5];  //                   +----+----+----+----+----+
    *a = 10;   //                a  |    |    |    |    |    |    Assuming size of int be 4 bytes.    ---> *a = 10 ===> *(1000) = 10 ==> a[0] = 10
               //                   +----+----+----+----+----+
               //                   1000  1004 1008 1012 1016
    printf("%d\n", a[0]);

    //Calling func1()
    int f1 = func1(a);

    printf("%d\n", f1); 

    //Calling func2()
    int f2 = func2(a);

    printf("%d", f2); 


    return 0;
}

/*

So, We can see ==> *(a + i) = a[i]

see: Next program...
*/

