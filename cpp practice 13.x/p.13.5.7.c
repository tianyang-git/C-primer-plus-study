// p.13.5.7.c

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LINE_SIZE 256

int main(int argc, char *argv[])
{
	char *line_one = (char* )malloc(LINE_SIZE * sizeof(char));
	char *line_two = (char* )malloc(LINE_SIZE * sizeof(char));
	/* 定义两个输入行的缓冲区 */
	
	int first_end = 1;
	if(argc != 3)
	{
		fprintf(stderr, "Usage: %s filename", argv[0]);
		exit(EXIT_FAILURE);
	}
	
	FILE *fp1, *fp2;
	if((fp1 = fopen(argv[1], "r")) == NULL)
	{
		fprintf(stderr, "Open %s failed\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	if((fp2 = fopen(argv[2], "r")) == NULL)
	{
		fprintf(stderr, "Open %s failed\n", argv[2]);
		exit(EXIT_FAILURE);
	}
	/* 输入文件的相关规定 */
	/* 开始打印独立行 */
	printf("Print the line ane bye one.\n");	
	int i = 1;
	while(fgets(line_one, LINE_SIZE, fp1) != NULL)
	{
		if(fgets(line_two, LINE_SIZE, fp2) != NULL)
		{
			printf("File 1 LINE NO.%d : %s", i, line_one);
			printf("File 2 LINE NO.%d : %s", i, line_two);
			i++;
			/* 两个文件逐一打印 */
		}
		else
		{
			printf("File 1 LINE NO.%d : %s", i, line_one);
			i++;
			/* 在第一个文件长于第二个文件的情况下打印 */
		}
	}/* 第一个文件读取到文件结束 */
	while(fgets(line_two, LINE_SIZE, fp2) != NULL)
		printf("File 2 LINE NO.%d : %s", i++, line_two);
	/* 如果第二次还有未读取的行，则继续打印第二个文件 */
	/* 开始合并行并打印 */
	printf("Print the combine line.\n");
	rewind(fp1);
	rewind(fp2);
	i = 1;
	while(fgets(line_one, LINE_SIZE, fp1) != NULL)
	{
		if(fgets(line_two, LINE_SIZE, fp2) != NULL)
		{
			printf("LINE NO.%d :", i);
			while(*line_one != '\n')
				putchar(*line_one++);
			putchar('+');
			printf(" %s", line_two);
			i++;
		}
		else
		{
			printf("LINE NO.%d : %s", i, line_one);
			i++;
		}
	}
	while(fgets(line_two, LINE_SIZE, fp2) != NULL)
		printf("LINE NO.%d : %s", i++, line_two);
	fclose(fp1);
	fclose(fp2);
	return 0;	 
}


















