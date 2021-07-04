// practice 6.6.13.c
#include <stdio.h>
int main(void)
{
	int lower, upper;
	printf("Enter lower and upper integer limits: ");
	scanf("%d %d", &lower, &upper);
	
	while (lower < upper)
	{
		int sum = 0;
		for (int i = lower; i < upper + 1; i++)
		{
			sum = sum + i*i;	
		}
	printf("The sum of the aquares form %d to %d is %d\n", lower, upper, sum);
	printf("Enter lower and upper integer limttes: ");
	scanf("%d %d", &lower, &upper);
	}
	printf("Done!");
	return 0;	
}
