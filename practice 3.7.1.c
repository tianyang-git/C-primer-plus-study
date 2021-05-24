// practice 3.7.1.c
#include <stdio.h>
#include <float.h>
#include <limits.h>
/* FLT_MAX -- float���͵����ֵ
   INT_MAX -- int���͵����ֵ*/
int main (void)
{
	int big_int = 2147483647;
	/* �з��������������ֵΪ 2 �� 31 �η��� 1 */
	float big_float = 3.4E38;
	/* ���������ݵ����ֵһ��Ϊ 3.4E38 */
	float small_float = 10.0/3;
	/* ���������ݵ���Чλ��һ��Ϊ 6 λ */
	
	printf("The big int data is %d\n", big_int + 1);
	/* �����������ֵ�� 1�������Խ�磬���Ϊ -2147483648 */ 
	printf("The big float data is %f\n", big_float * 10);
	/* ������������ݳ� 10 ���Խ�磬���  inf. �����������ֻ��
	1 ��С���㣬�����侫�����ƣ��������Խ�� */
	printf("The small float data is %f\n", small_float);
	/* ��ӡ 3.333333 */ 
	printf("The MAX float data is %f\n", FLT_MAX);
	/* ��ӡ */
	printf("The MAX int data is %ld\n", INT_MAX);
	/* ��ӡ */ 
 } 
