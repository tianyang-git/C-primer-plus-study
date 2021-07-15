// cpp practice 9.6.6.c
#include <stdio.h>
void ordering(double * a, double * b, double * c);
int main(void){
	double first, second, third;
	scanf("%lf %lf %lf", &first, &second, &third);
	printf("Data you input is %g, %g, and %g.\n", first, second, third);
	
	ordering(&first, &second, &third);
	printf("After function, data is %g, %g, and %g", first, second, third);
	
	return 0;
}

void ordering(double * a, double * b, double * c){
	double temp;
	if ( *a > *b ){
		temp = * a;
		*a = *b;
		*b = temp; 
	}
	if ( *b > *c ){
		temp = *b;
		*b = *c;
		*c = temp; 
	}		
	if ( *a > *c ){
		temp = *a;
		*c = *a;
		*a = temp; 
	}	
}
