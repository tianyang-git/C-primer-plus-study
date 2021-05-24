// practice 2.5.4
#include <stdio.h>

// 函数声明 
int jolly(void);
int deny(void);/*
	Name: 
	Copyright: 
	Author: 
	Date: 21/05/21 23:28
	Description: 
*/


int main(void)
{
// 函数调用 
	jolly();
	jolly();
	jolly();
	deny();
	
	return 0; 
 } 
 
 // 函数定义 
int jolly(void)
{
 	printf("For he's a jolly good fallow!\n") ;
 	return 0;
}
int deny(void)
{
	printf("Which nobody can deny!\n");
	return 0;
}
