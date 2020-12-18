#include <stdio.h>

int main(void)  
{ 
    int size=0;

    float sum = 0.0;

    int weight[size]; 

    printf("input size of array: "); 
    scanf("%d",&size); 

    printf("\ninput %d elements of array: ", size);

    
    for(int i=0; i<size; ++i)
    { 
        scanf("%d",&weight[i]); 
    }

    printf("Displaying integers:\n");

    // printing elements of an array
    for(int i = 0; i < size; ++i) 
    {
        printf("%d\n", weight[i]);
    }
    
    for (int i = 0; i < size; i++)
    {
        sum = sum + weight[i];
    }
    printf("Average weight for the set of the elephant seals. = %.4f units", sum/size);
    return 0;
}
