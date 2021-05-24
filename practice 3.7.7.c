// practice 3.7.7.c
#include <stdio.h>
#define INCH_TO_CM 2.54
int main(void)
{
	float inch, cm;
	printf("Enter the inch of your height");
	scanf("%f", &inch);
	
	cm = inch * INCH_TO_CM;
	printf("Hi, your %0.2f inch, or %0.2f cm height\n", inch, cm);
	
	return 0;
}
