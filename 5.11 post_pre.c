/* post_pre.c -- 前缀和后缀 */
#include <stdio.h>
int main(void)
{
	int a = 1, b = 1;
	int a_post, pre_b;
	
	a_post = a++;// 后缀增加
	pre_b = ++b;// 前缀怎加
	printf("a a_post   b pre_b\n");
	printf("%1d %6d %3d %5d", a, a_post, b, pre_b);

	return 0;
}