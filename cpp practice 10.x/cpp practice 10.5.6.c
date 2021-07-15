// cpp practice 10.5.6.c
#include <stdio.h>
void r_sort(double number[], int n);
int main(void){
	double sourse[12] = {2.3, 1.2, 3.1, 2.9, 5.3, 4.6, 0.6, 4.6, 7.2, 6.4, 9.2, 1.1};
	for(int i = 0; i < 12; i++)
		printf("%g ", sourse[i]);
	printf("\n");
	r_sort(sourse, 12);
	for(int i = 0; i < 12; i++)
		printf("%g ", sourse[i]);
	
	return 0;
}


void r_sort(double number[], int n){
	double temp;
	for (int i = 0; i < n - 1; i++)
	{
		for(int j = 0; j < n - i - 1; j++)
			while(number[j] < number[j+1])
			{
				temp = number[j+1];
				number[j+1] = number[j];
				number[j] = temp;  
			}
	}
	
}

