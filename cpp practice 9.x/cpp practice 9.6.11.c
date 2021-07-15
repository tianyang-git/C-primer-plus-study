// cpp practice 9.6.11.c
#include <stdio.h>
void Fibonacci(int n);
int main(void)
{
	int n;
	while((scanf("%d", &n)) == 1)
	{
		if (n >= 2)
			Fibonacci(n);
		printf("Enter the number of Fibonacci (q to quit): ");
	}
	return 0;
}
void Fibonacci(int n)
{
	unsigned long f1, f2, f;
	f1 = f2 = 1;
	for(int i = 0; i < n; i++)
	{
		printf("%lu ", f1);
		f = f1 + f2;
		f1 = f2;
		f2 = f;
	}
	printf("\n");	
}
