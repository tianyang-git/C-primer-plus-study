// practice 6.6.8.c
// practice 6.6.9.c
#include <stdio.h>
float calc(float x, float y);
int main(void)
{
	float x, y;
	printf("Please enter the two foloat(seprate by blank):");
	while(scanf("%f %f", &x, &y) == 2)
	{
		printf("The answer is %f\n", calc(x, y));
		printf("Please enter the two foloat data (seprate by blank):");
	}
	printf("Program end!");
}

float calc(float x, float y)
{
	float result;
	result = (x-y) / (x*y);
	return result;
}
