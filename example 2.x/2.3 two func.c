/* two func.c -- һ���ļ��а����������� */
#include <stdio.h>
void butler(void);/* ��һ��-ANAI/IAO C����ԭ�� */
int main(void)
{
	printf("I will summon the butler function.\n");
	butler();/* �ڶ���-��������*/
	printf("Yes. Bring me some tea and writeable DVDs.\n");

	return 0;
}
void butler(void)/* ������-�������忪ʼ */
{
	printf("You rang, Sir?\n");
}


