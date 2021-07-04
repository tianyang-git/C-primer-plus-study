// practice 4.5.1.c
#include <stdio.h>
#include <string.h>
int main(void)
{
	char name[40];
	char surname[40];
	int width;
	printf("Please input your first name:");
	scanf("%s", &name);
	/* 读取名字输入，存储至 name[] 数组中，由于 scenf() 函数的特性
	 * 字符串的输入不能有空白 */ 
	
	printf("Please input your last name:");
	scanf("%s", &surname);
	// 读取姓的输入,存储至 surname[] 数组中 
	
	printf("Hello, %s, %s.\n", name, surname);
//	printf("\"%s\"\n.",name);
	width = printf("\"%s\"\n", name); 
	/* 通过 printf() 函数的返回值获取名字的字符长度，
	 * width -= 4; 
	 * 由于 printf() 返回值为打印字符数，因此需要排除两个引号、一个转行符、一个句号，或者直接使用 
	 * width = strlen(name); 
	 * */
	printf("\"%20s\"\n", name);
	// 在宽度 20 的字段右端打印名字，使用转义序列 \" 打印双引号 
	printf("\"%-20s\"\n", name);
	// 在宽度 20 的字段左端打印名字，使用转义序列 \" 打印双引号 
	printf("\"%*s\"\n",(width + 3), name);
	// 使用修饰字符 * ,指定宽度参数，打印名字字符串 
	
	printf("sizeof is: %zd\n", sizeof(name));
	printf("First name strlen is: %d and last name strlen is: %d\n", strlen(name), strlen(surname));
	
	return 0; 
}
