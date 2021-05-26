// practice 4.5.4.c
#include <stdio.h>
int main(void){
	char name[40];

	float height;
	
	printf("Enter your first name:");
	scanf("%s", name);
	printf("Hi %s, How tall you are( inch ) :", name);
	scanf("%f", &height);
	
	printf("%s, you are %.3f feet tall \n", name, height /12.0);
	
	return 0;	
}
