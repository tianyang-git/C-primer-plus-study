/* pound.c -- 定义一个带一个参数的函数 */
#include <stdio.h>
void pound(int n);         // ANSI 函数原型声明
int main(void)
{
	int time = 5;
	char ch = '!';        // ASCII 码是 33
	float f = 6.0;

	pound(time);           // int 类型的函数
	pound(ch);             // 和 pound((int)ch);相同
	pound(f);              //和 pound((int)f);相同

	return 0;
}
void pound(int n)          // ANSI 风格函数头
{                          // 表明该函数接受一个 int 类型的参数
	while (n-- > 0)
		printf("#");
	printf("\n");
}
