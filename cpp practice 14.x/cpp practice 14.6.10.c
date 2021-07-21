// cpp practice 14.6.10.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void function_a(char c);
void function_b(char c);
void function_c(char c);

int main(int ingc, char * ingv[]){
	void (*pf[3])(char);
	pf[0] = function_a;
	pf[1] = function_b;
	pf[2] = function_c;
	char ch;
	puts("a.Function A");
	puts("b.Function B");
	puts("c.Function C");
	puts("Enter a, b, c or q");
	scanf("%c", &ch);
	while(ch != 'q')
	{
		while(getchar() != '\n') continue;
		switch(ch)
		{
			case 'a':
				pf[0](ch);
				break;
			case 'b':
				pf[1](ch);
				break;
			case 'c':
				pf[2](ch);
				break;
			default:
				break;																								
		}
		puts("a.Function A");
		puts("b.Function B");
		puts("c.Function C");
		puts("Enter a, b, c or q");
		scanf("%c", &ch);
	}
	puts("Done") ;
	return 0;
} 
void function_a(char c){
	printf("This is function a, you select %c\n", c);
}
void function_b(char c){
	printf("This is function b, you select %c\n", c);
}
void function_c(char c){
	printf("This is function c, you select %c\n", c);
}











