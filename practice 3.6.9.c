// practice 3.6.9
#include <stdio.h>

int main (void)
{
	char ch1, ch2, ch3, ch4;
// ת���ַ���ʽ 	
	ch1 = '\r'; 
	printf("%c\n", ch1);
// ������ʽ 
	ch2 = 13;
	printf("%c\n", ch2);
// �˽�����ʽ
	ch3 = '\015';
	printf("%c\n", ch3); 
// ʮ��������ʽ 
	ch4 = '\xd';
	printf("%c\n", ch4);
	
	return 0; 
}
