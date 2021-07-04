// practice 4.4.5.c
#include <stdio.h>
#define BOOK "War snd Pease"
int main (void){
	float coast = 12.99;
	float percent = 80.0;
	
	printf("This copy of \"%s\" sells for $%.2f.\n", BOOK, coast);
	printf("That is %.0f%% of list.", percent);
	
	return 0; 
}
