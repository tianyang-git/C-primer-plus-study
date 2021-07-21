// cpp practice 14.6.1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct month{
	char month_name[10];
	char month_abbrev[4];
	int days;
	int number;
	}months[12] = {
		{"January", "Jan", 31, 1},
		{"Februaary", "Feb", 28, 2},
		{"Marth", "Mar", 31, 3},
		{"April", "Apr", 30, 4},
		{"May", "May", 31, 5},
		{"June", "Jun", 30, 6},
		{"July", "Jul", 31, 7},
		{"August", "Aug", 31, 8},
		{"September", "Sep", 30, 9},
		{"October", "Oct", 31, 10},
		{"November", "Nov", 30, 11},
		{"December", "Dec", 31, 12}	
	};
int cala_days(const char *month);	 
int main(int argc, char *argv[]){
	char name[10];
	printf("Enter a capitalise month name: ");
	scanf("%s", name);
	while (strlen(name) == 3)
	{
		printf("The total to %s is %d \n", name, cala_days(name));
		printf("Enter a capotalise month name: ");
		scanf("%s", name);
	}
	printf("Done.");
	return 0;
	
}
int cala_days(const char *month){
	int total;
	for(int i = 0; i < 12; i++)
	{
		total = total + months[i].days;
		if(strcmp(months[i].month_abbrev, month) == 0) 
			return total;		
	}
	return -1;
}
