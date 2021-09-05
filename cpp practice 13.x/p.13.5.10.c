// p.13.5.10.c

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 256

int main(int argc, char *argv[])
{
	FILE *fp;
	char file_name[40];
	long position;
	char buffer[SIZE];
	
	printf("Input a filename: ");
	scanf("%s", file_name);
	if((fp = fopen(file_name, "r")) == NULL)
	{
		printf("Can't open %s.\n", file_name);
		exit(EXIT_FAILURE);
	}
	printf("Input the position to read (q or -1 to quit):");
	while(scanf("%ld", &position) == 1 && position >= 0)
	{
		fseek(fp, position, SEEK_SET);
		if(fgets(buffer, SIZE, fp) != NULL)
			printf("Content is : %s", buffer);
		printf("\nInput the position to read (q or -1 to quit):");
	}
	fclose(fp);
	return 0;
}