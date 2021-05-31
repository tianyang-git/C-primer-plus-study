// practice 5.6.2.c
#include <stdio.h>

int main(int argc, char * argv[]){
	int counter, i = 0;
	printf("PRINT COUNTINUE 10 NUMBERS!\n");
	printf("PLEASE INPUT THE START NUMBER :");
	scanf("%d", &counter);
	while (i++ <11){
		printf("%d\n",counter++);
	}
	printf("PROGRAM EXIT!");
	return 0;
} 

