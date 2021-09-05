// p.11.7.8.c

#include <stdio.h>
#include <string.h>
#define SIZE 80

char * string_in(char * st, char * sub);

int main(int argc, char * argv[]){
	char main_string[SIZE], sub[SIZE];
	char *p = NULL;
	puts("Enter a string as main string (blank to quit): ");
	fgets(main_string, SIZE, stdin);
	puts("Enter a sub string to find in main: ");
	fgets(sub, SIZE, stdin);
	while(*main_string != '\n')
	{
		p = string_in(main_string, sub);
		printf("Done\nNow the position of sub string is: %p\n", p);
		puts("Another? Enter a string as main string (blank to quit)");
		fgets(main_string, SIZE, stdin);
		puts("Enter a sub string to find in main: ");
		fgets(sub, SIZE, stdin);
	}
	return 0;	
}

char * string_in(char * st, char * sub){
	int count = 0;
	int src_len = strlen(sub);
	while(*st != '\0' && count < src_len)
		if(*(st + count) == *(sub + count))
			count++;		
		else
		{
			count = 0;
			st++;
		}
	if(count == src_len) return st;
	else return NULL;
}