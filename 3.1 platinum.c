/* platinum.c -- your weight in platinum */
#include <stdio.h>
int main(void)
{
	float weight;/* ������� */
	float value;/* ��������İ׽��ֵ */

	printf("Are you worth your weight in platinum?\n");
	printf("Let's check it out.\n");
	printf("Please enter your weight in pounds: ");

	/* ��ȡ�û������� */
	scanf_s("%f", &weight);
	getchar();
	// ����׽�ļ۸���ÿ��˾$1700
	// 14.5833���ڰ�Ӣ�����ⰻ˾ת��Ϊ��ⰻ˾
	value = 1700 * 14.5833 * weight;
	printf("Your weight in platinum is worth $%.2f.\n", value);
	printf("You aew easily worth that!If platinum prices drop,\n");
	printf("eat more to maintain your value.\n");

	getchar();
	return 0;

}