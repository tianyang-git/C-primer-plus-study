// p.13.5.5.c

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUFSIZE 4096
#define SLEN 81

void append(FILE *sourse, FILE *dest);

int main(int argc, char *argv[])
{
	FILE *fa, *fs;
	int files = 0;
	char file_app[SLEN];
	char file_src[SLEN];
	int ch;
	if(argc < 3)
	{
		fprintf(stderr, "Usage:%s dest_file arc_file.\n", argv[0]);
		exit(EXIT_FAILURE);
	}
	if((fa = fopen(argv[1], "a+")) == NULL)
	{
		fprintf(stderr, "Can't open %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	if(setvbuf(fa, NULL, _IOFBF, BUFSIZE) != 0)
	{
		fputs("Can't creats dest buffer\n", stderr);
		exit(EXIT_FAILURE);
	}
	
	files = argc - 2;
	/* 附加文件的数量减去1程序文件名和源文件两个参数 */
	
	while(files > 0)
	{
		if((fs = fopen(argv[argc - files], "r")) == NULL)
		{
			fprintf(stderr, "Can't open %s\n", argv[argc - files]);
			continue;
		}
		else
		{
			if(setvbuf(fs, NULL, _IOFBF, BUFSIZE) != 0)
			{
				fputs("Can't creats input buffer\n", stderr);
				continue;
			}
			append(fs, fa);
			if(ferror(fs) != 0)
				fprintf(stderr, "Error in reading file %s.\n", file_src);
			if(ferror(fa) != 0)
				fprintf(stderr, "Error in writing file %s.\n", file_app);
			
			fclose(fs);
			printf("File %s append.\n", file_src);
			if(files > 0) printf("Next file %s:\n", argv[argc - (--files)]);
			else printf("No more file to appended.\n");
		}
	}
	printf("Done appending, and %d files appended.\n", argc - 2);
	rewind(fa); printf("%s contents:\n", file_app);
	while((ch = getc(fa)) != EOF)
		putchar(ch);
	puts("Done displaying.");
	fclose(fa);
	return 0;
}

void append(FILE *sourse, FILE *dest)
{
	size_t bytes;
	static char temp[BUFSIZE];
	while((bytes = fread(temp, sizeof(char), BUFSIZE, sourse)) > 0)
		fwrite(temp, sizeof(char), bytes, dest);
		
/* size_t fread(void *ptr, size_t size, size_t nmemb, FILE *stream) 
从给定流 stream 读取数据到 ptr 所指向的数组中
成功读取的元素总数会以 size_t 对象返回，size_t 对象是一个整型数据类型。
如果总数与 nmemb 参数不同，则可能发生了一个错误或者到达了文件末尾。
*  size_t fwrite(const void *ptr, size_t size, size_t nmemb, FILE *stream)  
把 ptr 所指向的数组中的数据写入到给定流 stream 中
如果成功，该函数返回一个 size_t 对象，表示元素的总数，该对象是一个整型数据类型。
如果该数字与 nmemb 参数不同，则会显示一个错误。
*/ 
}







































