// practice 5.6.5.c
#include <stdio.h>
int main(int argc, char *argv[]){
	int day_remain, day_count = 0;
	float count = 0;
	float sum = 0;
	printf("Enter the number of days you work:");
	scanf("%d", &day_remain);
	while (day_remain > 0){		
		printf("Enter the number of money %d day:", day_count+1);
		scanf("%f", &count);
		sum = sum + count;
		day_remain--;
		day_count++;
	}
	printf("You earned RMB %.2f total in %d days!", sum, day_count);
	return 0;
}

