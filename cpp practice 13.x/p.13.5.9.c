// p.13.5.9.c

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 41

int get_number(FILE *fp);
int main(int argc, char *argv[])
{
	FILE *fp;
	char words[MAX];
	int count = 1;
	
	if((fp = fopen("wordy", "a+")) == NULL)
	{
		fprintf(stdout, "Can't open \"wordy\".\n");
		exit(EXIT_FAILURE);
	}
	count = get_number(fp);
	puts("Enter words to add to the file; press the #");
	puts("key at the beginning of a line to terminate.");
	while((fscanf(stdin, "%40s", words)) == 1 && (words[0]) != '#')
		fprintf(fp, "%d.%s\n", ++count, words);
		/* 修改 fprintf() 函数, 添加行号，程序并未修改 words 文件之前的行号 */
		/* 传递 stdin -> words -> fp */
	
	puts("FILE contens:");
	rewind(fp);
	while(fscanf(fp, "%s", words) == 1)
		puts(words);
		/* 传递 fp -> words */
	puts("Done!");
	if(fclose(fp) != 0) 
		fprintf(stderr, "Error closing file\n");
		/* 字符串 -> stderr */
	return 0;
}

int get_number(FILE *fp)
{
	int i = 0;
	char temp[MAX];
	rewind(fp);
	while(fgets(temp, MAX, fp) != NULL) 
		i++;
		/* 传递 fp -> temp */
	return i;
	/* 在单词保存时每个单词为一行，因此使用 fgets() 函数读取到文件某位并计数               */
}