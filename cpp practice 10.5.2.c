// cpp practice 10.5.2.c
#include <stdio.h>
void copy_arr(double t[], double s[], int n);
void copy_ptr(double *t, double *s, int n);
void copy_ptrs(double *t, double *s_first, double *s_last);
int main(void){
	double sourse[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
	double target1[5];
	double target2[5];
	double target3[5];
	copy_arr(target1, sourse, 5);
	copy_ptr(target2, sourse, 5);
	
	copy_ptrs(target3, sourse, sourse+5);
	return 0;
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
