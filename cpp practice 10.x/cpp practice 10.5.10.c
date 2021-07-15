// cpp practice 10.5.10.c
#include <stdio.h>
#define INDEX 4
void add_array(int n, int t[n], const int s1[n], const int s2[n]);
int main(void)
{
	int sum[INDEX], s1[INDEX] = {1, 2, 3, 4}, s2[INDEX] = {4, 3, 2, 1};
	
	
	for(int i = 0; i < INDEX; i++)
		printf("%d ", sum[i]);
	printf("\n");
	
	add_array(INDEX, sum, s1, s2);
	
	for(int i = 0; i < INDEX; i++)
		printf("%d ", sum[i]);

	return 0;
}
void add_array(int n, int t[n], const int s1[n], const int s2[n]){
	for (int i = 0; i < n; i++)
		*(t + i) = *(s1 + i) + *(s2 + i);
}
