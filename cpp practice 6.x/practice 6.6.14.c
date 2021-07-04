// practice 6.6.14.c
#include <stdio.h>
int main(void)
{
	double first[8], second[8];
	printf("Enter 8 date to the FIRSR array: ");
	for (int i = 0; i < 8; i++)
	{
		scanf("%lf", &first[i]);				
	}
	/* 
	for (int j = 0; j < 8; j++)
	{
		double sum = 0;
		for(int i = 0; i < j + 1 ; i++)
		{
			sum = first[i] + sum; 
		}
		second[j] = sum;
	}
	*/
	second[0] = first[0];
	for (int i = 1; i < 8; i++)
	{
		second[i] = second[i-1] + first[i]; 
	}
	printf("First array : ");
	for (int i = 0; i < 8; i++)
	{		
		printf("%3.0f ", first[i]);			
	}
	printf("\n");	
	printf("Second array :");
	for (int i = 0; i < 8; i++)
	{		
		printf("%3.0f ", second[i]);		
	}
	return 0;
}
