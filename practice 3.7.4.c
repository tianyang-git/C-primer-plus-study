// practice 3.7.4.c
#include <stdio.h>
int main(void)
{
	float input;
	printf("Enter a floating-point value\n");
	scanf("%f", &input);
	
	printf("fixed-point notation: %f \n", input);
	/* ��ӡ��ͨ��ʽ ת��˵����ʹ�� %f */
	printf("exponential notation��%e \n", input);
	/* ��ӡָ����ʽ ת��˵����ʹ�� %e */
	printf("p notation: %a \n", input);
	/* ��ӡ P��������ʽ ת��˵����ʹ�� %a */
	
	return 0;
}
