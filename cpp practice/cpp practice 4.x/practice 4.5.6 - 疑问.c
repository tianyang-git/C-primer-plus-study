// practice 4.5.6.c
#include <stdio.h>
int main(void){
	char name[40], surname[40];
	int wname, wsurname;
	printf("Please input your first name:");
	scanf("%s", name);
	printf("Please input your lasr name:");
	scanf("%s", surname);
	
	wname = printf("%s", name);
	printf(" ");
	wsurname = printf("%s", surname);
	// �ֱ��ӡ�û��պ�����ͨ������ֵ��¼���ַ����� 
	
	printf("\n%*d %*d", wname, wname, wsurname, wsurname);
	/* ��ӡ���ַ�����������������ȷ�������ʹ�� * ���η��Ͳ�������ʽ 
	 * Ҳ��ֱ��ʹ�����´���
	 * printf("\n%*d %*d"��strlen(name), strlen(name), strlen(wsurname), strlen(wsurname)); 
	 */ 
	return 0;
	/*
	Please input your first name:tian yang
	Please input your lasr name:tian yang
	   4    4
	--------------------------------
	
	Please input your first name:tian
	Please input your lasr name:yang
	tian yang
	   4    4
	
	why�� 
	*/
}
