// p.11.7.2.c
#include <stdio.h>
#define SIZE 40
char * read_char(char *st, int n);

int main(int argc, char *argv[]){
	char test[SIZE];
	puts("Start to test function. Enter a string.");
	read_char(test, SIZE);
	puts(test);
	
	return 0;
}

char * read_char(char *st, int n){
	int i = 0;
	do{
		st[i] = getchar();
		if(st[i] == '\n' || st[i] == '\t' || st[i] == ' ')
			break;	
	}while(st[i] != EOF && ++i < n);
	return st;
}