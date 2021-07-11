// cpp practice 10.5.11.c

#include <stdio.h>
void double_array(int n, int m, double sourse[n][m]);
void show_array(int n, int m, const double sourse[n][m]);
int main (void){
	int n = 2;
	int m = 3;
	double sourse[2][3] = {
	{0.4, 4.5, 3.2},
	{1.4, 7.5, 1.2},
	};
	
	printf("Before function:\n");
	show_array(n, m, sourse);
	
	printf("After function:\n");
	double_array(n, m, sourse);
	show_array(n, m, sourse);
	
	return 0; 
}
void double_array(int n, int m, double sourse[n][m]){
	for(int i = 0; i < n; i++)	
		for(int j = 0; j < m; j++)
			sourse[i][j] *= 2;
	
}
void show_array(int n, int m, const double array[n][m]){
	for(int i = 0; i < n; i++)	
		{
			for(int j = 0; j < m; j++)
				printf("%g ", array[i][j]);
			printf("\n");
		}	
}
