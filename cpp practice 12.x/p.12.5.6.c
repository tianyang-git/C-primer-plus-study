// p.12.5.6.c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10
#define LENGTH 1000

int main(int argv, char *argvp[])
{
	int data_count[SIZE + 1];
	int datum;
	for(int seed = 1; seed <= 10; seed++)
	{
		printf("This is %d round to create data.\n", seed);
		srand(seed);
		
		for(int i = 0; i <= SIZE; i++)
			data_count[i] = 0;
		for(int i = 0; i < LENGTH; i++)
		{
			datum = rand() % 10 + 1;
			data_count[datum]++;
		}
		// 用数组下标形式存储频次
		printf("Random data created, let's stata it.\n");
		for(int i = 1; i <= SIZE; i++)
			printf("The datum %d created %d time.\n", i, data_count[i]);
	}
	return 0;
}

