//print2.c -- ����printf()����
#include <stdio.h>
int main(void)
{
	unsigned int un = 3000000000;/* int Ϊ 32 λ�� short Ϊ 16 λ��ϵͳ */
	short end = 200;
	long big = 65537;
	long long verybig = 12345678908643;

	printf("un = %u and not %d\n", un, un);
	printf("end = %hd and %d\n", end, end);
	printf("big = %ld and not %hd\n", big, big);
	printf("verybig = %lld and not %ld\n", verybig, verybig);

	return 0;
}