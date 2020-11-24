
#include <stdio.h>

int main(void)
{
	int miles = 26, yards = 385;
	int kilometer_int;
	double kilometer_double;
	kilometer_int = 1.609 * (miles + yards/1760.0);
	kilometer_double = 1.609 * (miles + yards/1760.0);
	
	printf("\nA marathon is %d kilometers.\n", kilometer_int);
	printf("It prints rounded off value ");
	
     	printf("\nA marathon is %lf kilometers.\n", kilometer_double);
        printf("It prints double type value ");

	return 0;
}

