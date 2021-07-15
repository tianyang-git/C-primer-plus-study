// cpp practice 10.5.8.c
#include <stdio.h>
#define NUM_SRC 7 
#define NUM_TARG 3

void copy_ptr(double *t, double *s, int n);

int main(void){
	double src[NUM_SRC] = {1, 2, 3, 4, 5, 6, 7};
	double targ[NUM_TARG];
	printf("Before function: \n");
	for(int i = 0; i < NUM_SRC; i++) 
		printf("%g ", src[i]);
	printf("\n");
	for(int i = 0; i < NUM_TARG; i++) 
		printf("%g ", targ[i]);
		
	copy_ptr(targ, src+2, 3);

	printf("\nAfter function: \n");
	for(int i = 0; i < NUM_SRC; i++) 
		printf("%g ", src[i]);
	printf("\n");
	for(int i = 0; i < NUM_TARG; i++) 
		printf("%g ", targ[i]);
		
	return 0;
}

void copy_ptr(double *t, double *s, int n){
	for(int i = 0; i < n; i++)
		*(t + i) = *(s + i);
}

