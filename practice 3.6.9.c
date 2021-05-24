// practice 3.6.9
#include <stdio.h>

int main (void)
{
	char ch1, ch2, ch3, ch4;
// 转义字符形式 	
	ch1 = '\r'; 
	printf("%c\n", ch1);
// 整数形式 
	ch2 = 13;
	printf("%c\n", ch2);
// 八进制形式
	ch3 = '\015';
	printf("%c\n", ch3); 
// 十六进制形式 
	ch4 = '\xd';
	printf("%c\n", ch4);
	
	return 0; 
}
