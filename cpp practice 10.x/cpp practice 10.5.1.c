// cpp practice 10.5.1.c
#include <stdio.h>
#define YEARS 5
#define MONTHS 12
int main(void){
	const float rain[YEARS][MONTHS] = {
	(4.3, 4.3, 4.3, 3.0 ) 
	
	} ;
	int year, month;
	float subtot, total;
	const float (*ptr)[MONTHS] = rain;
	printf(" YEARS         RAINFALL    (inchs)\n");
	for(year = 0, subtot = 0; year < YEARS; year++)
	{	
		for(month = 0, subtot; month < MONTHS; month++)
			subtot += *(*(ptr + year)+month);
		printf("%5d %15d.1f\n", 2010 + year, subtot);
		total += subtot;
	}
	printf("\nThe yearly average is %.1f inches. \n\n", total/YEARS);
	printf("MONTHLY AVERAGES:\n\n");
	printf(" Jan Feb Apr May Jun Jul Aug Sep Oct Nov Dec\n");
	for(year = 0, subtot = 0; year < YEARS; year++)
	{	
		for(month = 0, subtot; month < MONTHS; month++)
			subtot += *(*(ptr + year)+month);
		printf("%4.1f ", subtot/YEARS);
	}
	printf("Done!\n");
	return 0;
	
}
