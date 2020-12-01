/*
Using sin() function from
math.h header file library
*/

#include <stdio.h>
#include <math.h> // For using sin() function, we have to call math.h Header file

#define PI 3.14159265

int main(void)
{
	double value_sine, value_cos, rad;

	while( rad <= 1.0)
	{
		printf("\nThe sine and cosine of %lf radian is %lf %lf respectively", rad , sin(rad), cos(rad));
		rad += 0.001;
	}

	return 0;
}

