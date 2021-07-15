//cpp practice 8.4.5.c
#include <stdio.h>
int main(void){
	int head = 1;
	int tail = 100;
	int guess = (head + tail)/2;
	char ch;
	printf("Pick an intager from 1 to 100. I will try to guess it.\n");
	printf("Rspond with y if my guess is right and");
	printf("with n if my guess is wrong.\n");
	do {
		printf("Un ...  your number is %d\n", guess);
		if(getchar() == 'y')  break;		
		printf("Well, then, %d is larger or smaller than yours?(l or s)", guess);
		while((ch = getchar()) == '\n') continue;
		if(ch == 'l' || ch == 'L')
		{
			tail = guess - 1;
			guess = (head + tail)/2;
			continue;
		}
		else if(ch == 's' || ch == 'S')
		{
			head = guess + 1;
			guess = (head + tail)/2;
			continue;
		}
		else continue;		
	}while (getchar() != 'y');
	printf("I know i could do it, it is %d", guess);
	return 0; 
}
