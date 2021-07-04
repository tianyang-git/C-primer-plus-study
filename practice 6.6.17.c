// practice 6.6.17.c
#include <stdio.h>
#include <string.h>
int main(void){
	double chuckie = 100;
	int year = 0;
	do{
		chuckie = chuckie + chuckie*0.08;
		chuckie = chuckie - 10;
		year++;
	}while(chuckie > 10/1.08 );
	printf("%d years later. Chuckie's account %f \n", year, chuckie);
	printf("%d years later. Chuckie's account is null \n", ++year);
	return 0;
}
