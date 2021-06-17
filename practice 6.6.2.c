#include <stdio.h>
#define N 5

int main(void){
	int m, n;
	for (m = 1; m <= N; m++)
	{
		for (n = 0; n < m ; n++)
		{
			printf("$");
		}	
		printf("\n");
	}
	return 0;
}
