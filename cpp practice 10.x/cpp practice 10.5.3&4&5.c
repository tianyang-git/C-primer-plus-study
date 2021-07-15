// cpp practice 10.5.3.c
// cpp practice 10.5.4.c
// cpp practice 10.5.5.c
#include <stdio.h>
double get_max(double number[], int n);
int get_max_index(double number[], int n);
double get_range(double number[], int n);
int main(void){
	double sourse[100] = {1, 2, 3, 5, 0, 7, 6, 13.9, 12.7};
	
	printf("The largest number in array is %g ,it is index is %d\n",get_max(sourse, 100), get_max_index(sourse, 100));
	printf("The max diff in array is %g", get_range(sourse, 100));
	return 0;
} 

double get_max(double number[], int n){
	double max = number[0];
	for (int i = 0; i < n; i++)
	{
		if (max < number[i])
			max = number[i];
	}
	return max;
}
int get_max_index(double number[], int n){
	double max = number[0];
	int index;
	for (int i = 0; i < n; i++)
	{
		if (max < number[i])
		{
			max = number[i];
			index = i;
		}	
	}
	return index;
}
double get_range(double number[], int n){
	double max = number[0];
	double min = number[0]; 
	
	for (int i = 0; i < n; i++)
	{
		if (max < number[i])
			max = number[i];
		if (min > number[i])
			min = number[i];	
	}

	return max - min;
}
