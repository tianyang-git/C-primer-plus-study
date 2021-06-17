// practice 6.6.12.c
#include<stdio.h>
int main(void){
	int length;
	double sum = 0.0;
	printf("Enter the limit length: ");
	scanf("%d", &length);
	
	while(length > 0) 
	{
		sum = 0.0;
		for (int i = 1 ; i <= length; i++)
		{
			sum = 1.0 / i;
		}
		printf("The sum of 1.0 +... +1.0 / %d.0 is %1f\n", length, sum);
		
		sum = 0.0;
		for (int i = 1 ; i <= length; i++)
		{
			if (i%2 == 0)
				sum = sum - 1.0 / i;
			else 
				sum = sum + 1.0 /i;
		}
		printf("The sum of 1.0 -... +1.0 / %d.0 is %1f\n", length, sum);
		
		printf("Enter the limit length: ");
		scanf("%d", &length);
	}
	
	printf("\nDone!\n");
	return 0;
}
