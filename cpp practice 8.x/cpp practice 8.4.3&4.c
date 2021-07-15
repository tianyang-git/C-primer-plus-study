// cpp practice 8.4.4.c
// cpp practice 8.4.3.c
#include <stdio.h>
#include <ctype.h>
int main(void)
{
	int lower_counter = 0;
	int upper_counter = 0;
	char ch;
	while((ch = getchar()) != EOF)
	{
		if(islower(ch))
			lower_counter++;
		if(isupper(ch))
			upper_counter++;
	}
	printf("There are %d uppercase, and %d lowercase in that file!",\
	lower_counter, upper_counter);
	return 0;
}
