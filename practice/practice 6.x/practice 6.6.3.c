#include <stdio.h>
int main(void){
	char c = 'F';
	int i, j;
	for (i = 1; i <= 6; i++)
	{
		for ( j = 0, c = 'F'; j < i; j++, c--)
		{
			printf("%c", c);
		}
		printf("\n");
	}
	return 0;
} 
