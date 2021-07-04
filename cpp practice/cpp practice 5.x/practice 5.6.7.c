// practice 5.6.7.c
#include <stdio.h>
double cubic(double n);
int main(void){
	double input;
	printf("Enter the double datum to calc cubic : ");
	scanf("%lg", &input);
	cubic(input);
	printf("PROGRAM EXIT!");
	return 0;
}
double cubic(double n){
	double t = n * n* n;
	printf("The %lg's cubie is %lg\n", n, t);
	return 0; 	
}
