// practice 6.6.15.c
#include <stdio.h>
#include <string.h>
int main(void)
{
	char data[256];
	int i = 0;
	
	printf("Enter the char in a line :");
	do{
		scanf("%c", &data[i]);		
	}while(data[i] != '\n' && ++i);
	
	printf("The reverse char of the data :");
	for(i--; i >= 0; i--)
	{
		printf("%c", data[i]);
	}
	
	printf("\nDone!\n");
	return 0;
}
