// boolean.c -- ʹ�� _Bool ���͵ı��� variable
#include <stdio.h>
#include <stdbool.h>
int main (void){
	long num;
	long sum = 0L;
//	_Bool input_is_good;
	bool input_is_good;
	
	printf("Please enter a integer to be summed ");
	printf("(q to quit): ");
	input_is_good = (scanf("%ld", &num) == 1);
	while (input_is_good){
		sum = sum + num;
		printf("Please enter next integer (q to quit): ");
		input_is_good = (scanf("%ld", &num) == 1);
	}
	printf("Those integers sum to %ld.\n", sum);
	
	return 0;
} 

