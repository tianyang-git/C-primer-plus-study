// sizeof.c -- ʹ�� sizeof �����
// ʹ�� C99 ������ %zd ת��˵�� -- �����������֧�� %zd���뽫���Ϊ %u �� %lu
#include <stdio.h>
int main(void)
{
	int n = 0;
	size_t intsize;

	intsize = sizeof(int);
	printf("n = %d, n has %zd bytes; all ints have %zd bytes.\n",
		n, sizeof n, intsize);
	return 0;
}