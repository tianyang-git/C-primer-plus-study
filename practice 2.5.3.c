// practice 2.5.3
#include <stdio.h>
#define DAYS_PEP_YEARS 365
/* 利用预编译指令指定一年的天数 */

int main()
{
	int age, days;
	age = 20;
	days = age * DAYS_PEP_YEARS;
	printf("Your age is %d, and it is %d days.\n", age, days);
	
	return 0;
 } 
