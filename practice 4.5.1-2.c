// practice 4.5.1.c
#include <stdio.h>
#include <string.h>
int main(void)
{
	char name[40];
	char surname[40];
	int width;
	printf("Please input your first name:");
	scanf("%s", &name);
	/* ��ȡ�������룬�洢�� name[] �����У����� scenf() ����������
	 * �ַ��������벻���пհ� */ 
	
	printf("Please input your last name:");
	scanf("%s", &surname);
	// ��ȡ�յ�����,�洢�� surname[] ������ 
	
	printf("Hello, %s, %s.\n", name, surname);
//	printf("\"%s\"\n.",name);
	width = printf("\"%s\"\n", name); 
	/* ͨ�� printf() �����ķ���ֵ��ȡ���ֵ��ַ����ȣ�
	 * width -= 4; 
	 * ���� printf() ����ֵΪ��ӡ�ַ����������Ҫ�ų��������š�һ��ת�з���һ����ţ�����ֱ��ʹ�� 
	 * width = strlen(name); 
	 * */
	printf("\"%20s\"\n", name);
	// �ڿ�� 20 ���ֶ��Ҷ˴�ӡ���֣�ʹ��ת������ \" ��ӡ˫���� 
	printf("\"%-20s\"\n", name);
	// �ڿ�� 20 ���ֶ���˴�ӡ���֣�ʹ��ת������ \" ��ӡ˫���� 
	printf("\"%*s\"\n",(width + 3), name);
	// ʹ�������ַ� * ,ָ����Ȳ�������ӡ�����ַ��� 
	
	printf("sizeof is: %zd\n", sizeof(name));
	printf("First name strlen is: %d and last name strlen is: %d\n", strlen(name), strlen(surname));
	
	return 0; 
}
