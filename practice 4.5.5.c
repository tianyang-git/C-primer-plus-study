// practice 4.5.5.c
#include <stdio.h>
int main(void){
	float speed, size, time;
	printf("Please input the net speed(megabites per second):");
	scanf("%f", &speed);
	printf("Please input the file size(megabites):");
	scanf("%f", &size);
	
	time = size / speed;
	
	printf("At %.2f megabites per second, a file of %.2f megabytes download in %.2f seconds.", speed, size, time);
	
	return 0;
} 

