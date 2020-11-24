/*
Using sin() function from
math.h header file library
*/

#include <stdio.h>
#include <math.h> // For using sin() function, we have to call math.h Header file

#define PI 3.14159265

int main()
{
	double x, value, rad;

	printf("Enter the value of x (in degrees): ");
	scanf("%lf",&x);

	//Converting degree  to radian value
	rad = x * (PI/180);
	value = sin(rad);
	printf("The sine of %lf degrees is %lf", x , value);

	return 0;
}

