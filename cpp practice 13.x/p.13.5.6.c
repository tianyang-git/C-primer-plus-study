#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LEN 40

int main(int argc,char*argv[])
{
	FILE*in,*out;
	int ch;
	char name[LEN];
	int count=0;
	char input[LEN];
	
	printf("Input the filename:");
	scanf("%s",input);
	
	if((in=fopen(input,"r"))==NULL)
	{
		fprintf(stderr,"I couldn't open the file \"%s\"",input);
		exit(EXIT_FAILURE);
	}
	
	strncpy(name,input,LEN-5);
	name[LEN-5]='\0';
	strcat(name,".red");
	
	if((out=fopen(name,"w")) == NULL)
	{
		fprintf(stderr,"Can't create output file.\n");
		exit(EXIT_FAILURE);
	}
	while((ch=getc(in)) != EOF)
	{
		if(count++%3 == 0)
			putc(ch,out);
	}
	if(fclose(in)!=0||fclose(out)!=0)
		fprintf(stderr,"Error in closing files\n");
	return 0;
}