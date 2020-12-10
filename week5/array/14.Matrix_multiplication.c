/*

<---------------
A                        ^       B
+---+---+---+            |     +---+---+---+
| 1 | 2 | 3 |            |     | 1 | 2 | 3 |
+---+---+---+            |     +---+---+---+
| 1 | 2 | 1 |            |     | 1 | 2 | 1 |                 
+---+---+---+            |     +---+---+---+                                             
| 3 | 1 | 2 |            |     | 3 | 1 | 2 |
+---+---+---+            |     +---+---+---+  
              3 x 3                          3 x 3



(0,0) = (1*1) + (2*1) + (3*3) = 12
(0,1) = (1*2) + (2*2) + (3*1) = 9
(0,2) = (1*3) + (2*1) + (3*2) = 11

(1,0) = (1*1) + (2*1) + (1*3) = 6
(1,1) = (1*2) + (2*2) + (1*1) = 7
(1,2) = (1*3) + (2*1) + (1*2) = 7

(2,0) = (3*1) + (1*1) + (2*3) = 10
(2,1) = (3*2) + (1*2) + (2*1) = 10
(2,2) = (3*3) + (1*1) + (2*2) = 14


***NOTE: In order to multiply 2 matrices: 

        No.(Column of 1st matrix) = No.( Row of 2nd matrix)

                                           +---+---+
        +---+---+---+                      | 1 | 2 |                                        +---+---+
        | 1 | 2 | 3 |                      +---+---+                                        | 12| 9 |   
        +---+---+---+                      | 1 | 2 |    ============> Resultant Matrix :    +---+---+
        | 1 | 2 | 1 |                      +---+---+                                        | 6 | 7 |
        +---+---+---+                      | 3 | 1 |                                        +---+---+
                  2 x 3                    +---+---+                                                  2 x 2
                                                      3 x 2                                           |   |--------> Column of 2nd matrix
                                                                                                      V
                                                                                                    Row of 1st matrix  

*/

/*

Question:
------------

Enter the rows and columns of matix a: 3 3

Enter the  elements of matrix a:

1 2 3
1 2 1
3 1 2

Enter the rows and columns of matrix b: 3 3

Enter the elements of matrix b:

1 2 3
1 2 1
3 1 2

Resultant matrix:

12 9 11
6  7  7
10 10 14

*/

#include<stdio.h>

#define len 50

int main(void)
{
    // array a
    int a[len][len];

    int i, j;
    
    int a_row, a_column;

    int sum =0;

    // Matrix 1:
    printf("Enter rows in matrix a and Enter columns of the matrix a: ");
    scanf("%d %d", &a_row, &a_column);

    printf("Enter the elements of the matrix a:\n");
    for(i=0; i<a_row; i++)
    {
        for(j=0; j<a_column; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    //Matrix 2:

    int b[len][len];

    int b_row, b_column;

    printf("Enter rows in matrix b And Enter columns of the matrix b:");
    scanf("%d %d", &b_row, &b_column);

    if(b_row != a_column)
        printf("Sorry! can't multiply as No.(Column of 1st matrix) != No.( Row of 2nd matrix) ");
    else
        printf("Enter the elements of the matrix b:\n");
        
        for(i=0; i<b_row; i++)
        {
            for(j=0; j<b_column; j++)
            {
                scanf("%d", &b[i][j]);
            }
        }

    printf("\n");

    int k;

    // Matrix Multiplication

    int product[len][len] ;

    for(i=0; i<a_row; i++)    // row of a matrix
    {
        for(j=0; j<b_column; j++) // row of b matrix
        {
            for(k = 0; k<b_row; k++) // or for(k = 0; k<a_column; k++) as, No.(Column of 1st matrix) = No.( Row of 2nd matrix)
            {
                sum += a[i][k] * b[k][j];
                /*
                            A                               B   b_column
                                                                |
                k is iterrator                                    V   
                assume: a_row ---> 1 2 3                          1   k is iterrator
                                                                2
                                                                3

                    k = 0;

                    s1: a[i][k] = a[0][0] ---> 1
                        b[k][j] = b[0][0] ---> 1       a * b = 1 * 1 = 1

                    s3: a[i][k] = a[0][2] ---> 3
                        b[k][j] = b[2][0] ---> 3       a * b = 3 * 3 = 9

                    ... And so on,.....

                    Then addition,
                */
            }
            product[i][j] = sum;
            sum = 0;

        }
    }

    //Printing the array elements:
    printf("Resultant matrix\n");
    for(i=0; i<a_row; i++)    // row of a matrix
    {
        for(j=0; j<b_column; j++) // row of b matrix
        {
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }

    return 0;
}   
