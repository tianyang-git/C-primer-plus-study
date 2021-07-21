// cpp practice 14.6.11.c

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define LENGH 10
void transform(double src[], double tar[], int n, double(*func)(double));

int main(int argc, char * argv[]){
	double sourse[LENGH], target[LENGH];
	int n;
	for(int i = 0; i < LENGH; i++)
		sourse[i] = i;
	puts("The sourse data is:");
	for(int i = 0; i < LENGH; i++)
		printf("%5.3g ", sourse[i]);
	printf("\n");
	
	transform(sourse, target, LENGH, sin);
	
	puts("The target sin data is:");
	for(int i = 0; i < LENGH; i++)
		printf("%5.3g ", target[i]);
				
	puts("\nDone");
	return 0;	
}

void transform(double src[], double tar[], int n, double(*func)(double)){
	for(int i = 0; i < n; i++)
		tar[i] = func(src[i]);	
}
