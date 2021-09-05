// p.13.5.1.c

#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	int ch;
	FILE *fp;
	unsigned long count = 0;
	char file_name[50];
	puts("Input the file_name: ");
	scanf("%s", file_name);
	
	if((fp = fopen(file_name, "r")) == NULL)
	{
		printf("Can't open %s\n", file_name);
		exit(-1);
	}
	while((ch = getc(fp)) != EOF)
	{
		putc(ch, stdout);
		count++;
	}
	fclose(fp);
	printf("\n");
	printf("File %s has %lu characters\n", file_name, count);
	return 0;
	
}