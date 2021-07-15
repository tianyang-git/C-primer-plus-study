// cpp practice 9.6.5.c
#include <stdio.h>
void large_of(double * x, double * y);
int main(void){
	double d1, d2;
	scanf("%lf %lf", &d1, &d2);
	
	printf("Data you input is %g %g.\n", d1, d2);
	
	large_of(&d1, &d2);
	printf("After function, data is %g and %g.\n", d1, d2);
	
	return 0;
}
void large_of(double * x, double * y){
	*x < *y? (*x = *y) : (*y = *x);
}
