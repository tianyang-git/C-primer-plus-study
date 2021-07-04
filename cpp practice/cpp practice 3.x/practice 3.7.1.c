// practice 3.7.1.c
#include <stdio.h>
#include <float.h>
#include <limits.h>
/* FLT_MAX -- float类型的最大值
   INT_MAX -- int类型的最大值*/
int main (void)
{
	int big_int = 2147483647;
	/* 有符号整型数据最大值为 2 的 31 次方减 1 */
	float big_float = 3.4E38;
	/* 浮点型数据的最大值一般为 3.4E38 */
	float small_float = 10.0/3;
	/* 浮点型数据的有效位数一般为 6 位 */
	
	printf("The big int data is %d\n", big_int + 1);
	/* 整型数据最大值加 1，会造成越界，结果为 -2147483648 */ 
	printf("The big float data is %f\n", big_float * 10);
	/* 浮点型最大数据乘 10 造成越界，输出  inf. 如果浮点数据只加
	1 个小数点，由于其精度限制，不会造成越界 */
	printf("The small float data is %f\n", small_float);
	/* 打印 3.333333 */ 
	printf("The MAX float data is %f\n", FLT_MAX);
	/* 打印 */
	printf("The MAX int data is %ld\n", INT_MAX);
	/* 打印 */ 
 } 
