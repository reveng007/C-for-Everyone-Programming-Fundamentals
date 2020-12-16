#include<stdio.h>

int swap(int x, int y)
{
    int t;

    t = x;
    x = y;
    y = t;

    return x,y;

}

int main()
{
    int a = 10, b = 20;
    printf("Before Swap :\n a = %d b = %d\n", a, b);

    swap(a, b);

    printf("After Swap :\n a = %d b = %d\n", a, b);
    
    
    printf("In this program Swapping took place.\n");

    return 0;
}
