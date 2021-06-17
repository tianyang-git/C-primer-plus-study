// practice 6.6.10.c
#include <stdio.h>
int main(void){
	int lower, upper;
	printf("Enter lower and upper integer limits: ");
	scanf("%d %d",&lower, &upper);
	while( lower < upper)
	{
		int sum = 0;
		for( int i = lower; i <= upper; i++)
		{
			sum += i*i;
		}
		printf("The sum of the squares form %d to %d is %d", lower, upper, sum);		
		scanf("%d %d",&lower, &upper);
	}
	return 0;
}
