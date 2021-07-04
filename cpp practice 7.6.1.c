// cpp practice 7.6.1.c
#include <stdio.h>
int main(void){
	char ch;
	int blank = 0;
	int endline = 0;
	int others = 0;
	while ( (ch = getchar()) != '#')
	{
		if (ch == ' ')
			blank++;
		else if (ch == '\n')
			endline++;
		else 
			others++; 
	}
	printf("%d blank, %d endline, %d others\n", blank, endline, others);
	return 0;
}
