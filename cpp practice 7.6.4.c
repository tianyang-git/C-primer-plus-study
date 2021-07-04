// cpp practice 7.6.4.c
#include <stdio.h>
int main(void)
{
	char ch;
	int counter = 0;
	while((ch = getchar()) != '#')
	{
		if (ch == '!')
		{
			printf("!!"); 
			counter++;
		}
		else if (ch == '.')
		{
			printf("!");
			counter++;
		}
		else
			printf("%c", ch);
	}
	printf("\nTotal replace %d times\n", counter);
	printf("Done!\n");
	return 0;
}
