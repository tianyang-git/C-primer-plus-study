// cpp practice 10.5.7.c
#include <stdio.h>
#define ROWS 3
#define COLS 2
void copy_arr(double t[], double s[], int n);
void copy_ptr(double *t, double *s, int n);
void copy_ptrs(double *t, double *s_first, double *s_last);

void copy_2d_array(double t[][COLS], double s[][COLS], int n); 

int main(void){
	double sourse[ROWS][COLS] =
	{
	{1.1, 2.2},
	{3.3, 4.4},
	{5.5, 6.6},
	};
	double target1[ROWS][COLS] = {0};
	
	
	printf("Before function: \n");
	for(int i = 0; i < ROWS; i++) 
		for(int j = 0; j < COLS; j++)
		{
			printf("%g ", sourse[i][j]);
		}
	printf("\n");
	for(int i = 0; i < ROWS; i++) 
		for(int j = 0; j < COLS; j++)
		{
			printf("%g ", target1[i][j]);
		}		
			
	copy_2d_array(target1, sourse, ROWS);
	printf("\nAfter function: \n");
	
	for(int i = 0; i < ROWS; i++) 
		for(int j = 0; j < COLS; j++)
		{
			printf("%g ", sourse[i][j]);
		}
	printf("\n");
	for(int i = 0; i < ROWS; i++) 
		for(int j = 0; j < COLS; j++)
		{
			printf("%g ", target1[i][j]);
		}			

	return 0;
}

void copy_2d_array(double t[][COLS], double s[][COLS], int n){
	
	for(int row = 0; row < n; row++)
		copy_arr(t[row], s[row], COLS);
}


void copy_arr(double t[], double s[], int n){
	for(int i = 0; i < n; i++)
		t[i] = s[i];
}
void copy_ptr(double *t, double *s, int n){
	for(int i = 0; i < n; i++)
		*(t + i) = *(s + i);
}
void copy_ptrs(double *t, double *s_first, double *s_last){
	for(int i = 0; i < (s_last - s_first); i++)
		*(t+i) = *(s_first + i);
}

