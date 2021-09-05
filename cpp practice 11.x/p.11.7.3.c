// p.11.7.3.c
#include <stdio.h>
#include <ctype.h>
#define SIZE 80
char * get_word(char *out);

int main(int argc, char * argv[]){
	char output[SIZE];
	get_word(output);
	printf("First word you input is : %s", output);

	return 0;
}

char * get_word(char * out){
	char input[SIZE];
	char * in = input;
	puts("Enter a string.");
	fgets(input, SIZE, stdin);
	
	while 
	while(isalpha(*in))
	{
		*out++ = *in++;
	}	
	return out;
}
