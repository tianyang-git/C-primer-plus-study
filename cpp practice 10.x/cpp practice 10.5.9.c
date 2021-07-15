// cpp practice 10.5.9.c
#include <stdio.h>
void copy_array(int n, int m, double target[n][m], const double sourse[n][m]);
void show_array(int n, int m, const double sourse[n][m]);
int main (void){
	int n = 2;
	int m = 3;
	double target[n][m], sourse[2][3] = {
	{0.4, 4.5, 3.2},
	{1.4, 7.5, 1.2},
	};
	
	printf("Before function:\n");
	show_array(n, m, sourse);
	show_array(n, m, target);
	
	printf("After function:\n");
	copy_array(n, m, target, sourse);
	show_array(n, m, sourse);
	show_array(n, m, target);
	
	return 0; 
}
void copy_array(int n, int m, double target[n][m], const double sourse[n][m]){
	for(int i = 0; i < n; i++)	
		for(int j = 0; j < m; j++)
			target[i][j] = sourse[i][j];
	
}
void show_array(int n, int m, const double array[n][m]){
	for(int i = 0; i < n; i++)	
		{
			for(int j = 0; j < m; j++)
				printf("%g ", array[i][j]);
			printf("\n");
		}	
}
