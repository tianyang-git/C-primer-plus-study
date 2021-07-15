// cpp practice 9.6.4.c
#include <stdio.h>
double harmean(double x, double y);
int main (void)
{
	double a, b;
	printf("Enter two float number: ");
	scanf("%lf %lf", &a, &b);
	
	printf("The HarMEAN of %g and %g is %g.", a, b, harmean(a, b));
	return 0; 
}
double harmean(double x, double y)
{
	return 2 / (1/x + 1/y);
}
