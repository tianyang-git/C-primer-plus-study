// p.13.5.3.c

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
	FILE *fp;
	char file_name[80];
	char ch;
	puts("Input the filename: ");
	scanf("%s", file_name);
	while((fp = fopen(file_name, "r+")) == NULL)
	{
		printf("Can't open file.\n", file_name);
		exit(EXIT_FAILURE);
	}
	while((ch = getc(fp)) != EOF)  
	{
		fseek(fp, -sizeof(char), SEEK_CUR);
		putc(toupper(ch), fp);
	}
	fclose(fp);
	return 0; 	
}