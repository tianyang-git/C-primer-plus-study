// practice 3.7.2.c
#include <stdio.h>
int main(void)
{
	int input;
	printf("Enter a value of char ASCII:");
	scanf("%d", &input);
	// ͨ�� scanf()������ȡ�û����룬���洢�� input ������ 
	printf("You input value is %d, and char is %c\n", input, input);
	/* ͨ��ת��˵���� %c ��ӡ������ֵ���ַ� */ 
	return 0;
}
