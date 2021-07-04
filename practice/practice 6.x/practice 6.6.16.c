// practice 6.6.16.c
#include <stdio.h>
int main(void)
{
	double daphne, deirdre;
	daphne = deirdre = 100.0;
	int year = 0;
	do{
		daphne = daphne + 100 * 0.1 ;
		deirdre = deirdre + deirdre * 0.05 ;
		year++;
	}while ((daphne - deirdre) > 0);
	
	printf("%d years laters.\nDaphne = %f.\nDeirdre = %f\n", year, daphne, deirdre);
	
	printf("Done!\n");
	return 0;
	  
 } 
