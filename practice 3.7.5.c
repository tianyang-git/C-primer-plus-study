// practice 3.7.5.c
#include <stdio.h>
#define SEC_PER_YEAR 3.156e7
/* 通过预编译指令定义每年的秒数 */
int main(void)
{
	float second, year;
	/* 由于数据需求，年龄也使用浮点型数据 */
	printf("Enter how many years old you are:");
	scanf("%f", &year);
	// 读取用户输入的年龄 
	
	second = year * SEC_PER_YEAR;
	// 计算年龄对应的秒数 
	
	printf("You are: %.1f years old.\n", year);
	printf("And you are %e seconds old, too.\n", second);
	
	return 0;
}
