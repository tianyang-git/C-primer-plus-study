// cpp practice 8.4.1.c
#include <stdio.h>
int main(void)
{
	int counter = 0;
	char ch;
	while ((ch = getchar()) != EOF)
	{
		counter++;
	}
	printf("The File has %d characters.\n", counter);
	return 0;
}
