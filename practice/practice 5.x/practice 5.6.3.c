// practice 5.6.3.c
#include <stdio.h>
#define WEEK_PER_DAY 7
int main(void){
	int input, days, weeks;
	printf("CONVERT DAYS TP WEEKS\n");
	printf("Please input the number of days( <=0 TO QUIT):");
	scanf("%d", &input);
	while(input > 0){
		weeks = input / WEEK_PER_DAY;
		days = input % WEEK_PER_DAY;
		printf("%d days are %d weeks, %d days\n",input, weeks, days);
		printf("PLEASE INPUR THE ANOTHER NUMBER OF DAYS( <=0 TO QUIT ):");
		scanf("%d", &input);
	}
	printf("PROGRAM EXIT!\n");
	return 0;
} 
