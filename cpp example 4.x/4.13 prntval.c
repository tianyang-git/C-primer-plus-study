/* prntval.c -- printf()的返回值 */
#include <stdio.h>
int main(void)
{
	int bph2o = 212;
	int rv;

	rv = printf("%d F is water's boiling point.\n", bph2o);
	printf("The print() function printed %d \
characters.\n", rv);// 针对所有字符数

	return 0;
}