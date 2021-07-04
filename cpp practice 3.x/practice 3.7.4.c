// practice 3.7.4.c
#include <stdio.h>
int main(void)
{
	float input;
	printf("Enter a floating-point value\n");
	scanf("%f", &input);
	
	printf("fixed-point notation: %f \n", input);
	/* 打印普通形式 转换说明符使用 %f */
	printf("exponential notation：%e \n", input);
	/* 打印指数形式 转换说明符使用 %e */
	printf("p notation: %a \n", input);
	/* 打印 P记数法形式 转换说明符使用 %a */
	
	return 0;
}
