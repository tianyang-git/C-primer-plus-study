// cpp practice 7.6.3.c
#include <stdio.h>
int main(void)
{
	int odd_sum = 0;
	int even_sum = 0;
	int odd_count = 0;
	int even_count = 0;
	int input = 0;
	while (scanf("%d", &input) != 0)
	{
		if(input == 0)
			break;
		
		if (input % 2 == 1)
			{
				odd_sum += input; 
				odd_count++;
			}
		else
			{
				even_sum += input;
				even_count++;
			}		
	}
	printf("Have %d even number, average is %f \n", even_count, 1.0*even_sum/even_count);
	printf("Have %d odd number, average is %f \n", odd_count, 1.0*odd_sum/odd_count);
	return 0;
}
