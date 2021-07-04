// practice 3.7.2.c
#include <stdio.h>
int main(void)
{
	int input;
	printf("Enter a value of char ASCII:");
	scanf("%d", &input);
	// 通过 scanf()函数读取用户输入，并存储在 input 变量中 
	printf("You input value is %d, and char is %c\n", input, input);
	/* 通过转换说明符 %c 打印整型数值和字符 */ 
	return 0;
}
