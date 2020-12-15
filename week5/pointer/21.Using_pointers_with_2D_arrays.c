/*

Firstly, We have to understand the difference between Row Major and Column Major order


Row major order: Elements are stored row by row

  <--Row 0-->|<--Row 1-->|<--Row n-1--->
 +---+---+---+---+---+---+---+---+-----+
 |   |...|   |   |...|   |   |...|     |
 +---+---+---+---+---+---+---+---+-----+


Column major order: Elements are stored column by column

  <--------Column 0-------->|<-------Column 1------->|<------Column n-1--------->
 +--------+--------+--------+--------+-------+-------+-------+---------+--------+
 |        |   ...  |        |        |  ...  |       |       |   ...   |        |
 +--------+--------+--------+--------+-------+-------+-------+---------+--------+



***NOTE:

C stores Multidimentional array in ROW MAJOR ORDER.


Traditional Method (2 for loop(nested)):
----------------------------------------

for(i=0; i<row; i++) // row
    for(j=0; j<col; j++) // column
        printf("%d ", a[i][j]);


a     c0     c1
    +-----+-----+
r0  |  1  |  2  |
    +-----+-----+
r1  |  3  |  4  |
    +-----+-----+   
               
               
Creation of array will be in the order: r0, r2, r2, ..., r(n-1)
               
                  +---+---+---+---+
                a | 1 | 2 | 3 | 4 |
                  +---+---+---+---+
                  <-Row0->|<-Row1->


Pointer Method (Single for loop):
----------------------------------

      1st element
           |
           V
for(p = &a[0][0]; p <= &a[row-1][col-1]; p++)
    printf("%d ", *p);


 +--------+--------+--------+--------+
 |   1    |   2    |   3    |   4    |
 +--------+--------+--------+--------+
  a[0][0]   a[0][1] a[1][0]   a[1][1]

 <----- Row 0----->|<---- Row 1 ----->

 row = 2
 column = 2


Output: 1 2 3 4

*/

