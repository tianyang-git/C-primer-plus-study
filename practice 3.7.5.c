// practice 3.7.5.c
#include <stdio.h>
#define SEC_PER_YEAR 3.156e7
/* ͨ��Ԥ����ָ���ÿ������� */
int main(void)
{
	float second, year;
	/* ����������������Ҳʹ�ø��������� */
	printf("Enter how many years old you are:");
	scanf("%f", &year);
	// ��ȡ�û���������� 
	
	second = year * SEC_PER_YEAR;
	// ���������Ӧ������ 
	
	printf("You are: %.1f years old.\n", year);
	printf("And you are %e seconds old, too.\n", second);
	
	return 0;
}
