/* pound.c -- ����һ����һ�������ĺ��� */
#include <stdio.h>
void pound(int n);         // ANSI ����ԭ������
int main(void)
{
	int time = 5;
	char ch = '!';        // ASCII ���� 33
	float f = 6.0;

	pound(time);           // int ���͵ĺ���
	pound(ch);             // �� pound((int)ch);��ͬ
	pound(f);              //�� pound((int)f);��ͬ

	return 0;
}
void pound(int n)          // ANSI �����ͷ
{                          // �����ú�������һ�� int ���͵Ĳ���
	while (n-- > 0)
		printf("#");
	printf("\n");
}
