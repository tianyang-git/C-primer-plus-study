// practice 6.6.18.c
#include <stdio.h>
#include <string.h>

int main(void)
{
	int rabnud = 5;
	int week = 1;
	while(rabnud < 150)
	{
		printf("At %d weeks, Rabnud has %3d friends \n", week, rabnud);
		rabnud = (rabnud - week++) * 2;
	}
	printf("Done!\n");
	return 0;
}

