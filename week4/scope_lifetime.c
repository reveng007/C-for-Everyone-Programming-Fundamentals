#include <stdio.h>

int main(void)
{                                                            //     <------------------------------
    int i = 5;                                                 //                                 |
    {                                                          //  <--------                      |
        int j = i + 2;                                         //          |                      |
        {                                                      //          |                      |
            printf("%d, %d", i, j);                            //          |   Lifetime           |  Lifetime of i
        }                                                      //          |    of j              |   
                                                               //          |                      |
    }                                                          //  <-------|                      |        
    //printf("%d",j);                                          //                                 |
    // Scope lifetime error: scope_lifetime.c:13:17: note: each undeclared identifier is reported only once for each function it appears in
    printf("%d",i);                                          //                                   |
}                                                           //         <--------------------------|                           
