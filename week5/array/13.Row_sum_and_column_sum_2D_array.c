/*
write a Program that reads a 5 x 5 array of integers and then prints the row sum and the column sum:

Enter row1:  8 3 9  0 10

Enter row2:  3 5 17 1 1

Enter row3:  2 8 6 23 1

Enter row4: 15 7 3 2  9

Enter row5: 6 14 2 6 0


Row Total:    30 27 40 36 28
Column total: 34 37 37 32 21

*/

#include<stdio.h>

int main(void)
{
    int arr[5][5] = {
                     {8, 3, 9, 0, 10}, 
                     {3, 5, 17, 1, 1}, 
                     {2, 8, 6, 23, 1}, 
                     {15, 7, 3, 2, 9}, 
                     {6, 14, 2, 6, 0}
                    };

    int i, j;
    int sum = 0;

    // Row Sum ------------------> In this case, Column pointer is changing, While row is remaining static when calcualtion is going on for Row 1... In this way.....
    
    printf("\nRow Sum: ");
    for(i = 0; i<5; i++) // Row
    {   
        for(j=0; j<5; j++) // Column
        {
            sum += arr[i][j];
            //printf(" %d\t", sum);
        }
        printf("%d\t", sum);
        sum=0;
    }

    printf("\n\n");

    // Column Sum --------------------> In this case, Row pointer is changing, While column is remaining static when calcualtion is going on for Column 1... In this way.....

    printf("Column Sum: ");
    for(j = 0; j<5; j++) // Column
    {
        for(i = 0; i<5; i++) // Row
        {
            sum += arr[i][j];
        }
        printf("%d\t", sum);
        sum=0;
    }

return 0;
}
