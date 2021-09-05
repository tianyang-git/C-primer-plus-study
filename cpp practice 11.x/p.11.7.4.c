// p.11.7.4.c
// p.11.7.3.c
#include <stdio.h>
#include <ctype.h>
#define SIZE 80
char * get_word(char *out, int n);

int main(int argc, char * argv[]){
	char output[SIZE];
	get_word(output, SIZE);
	printf("First word you input is : %s", output);

	return 0;
}

char * get_word(char * out, int n){
	char input[n];
	int i = 0;
	char * in = input;
	puts("Enter a string.");
	fgets(input, n, stdin);
	
	while(isalpha(*in) && i < n)
	{
		*out++ = *in++;
		i++;
	}	
	return out;
}
