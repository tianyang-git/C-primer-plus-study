// cpp practice 14.6.2
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
int cala_days(const char *month, const int day);	 
int main(int argc, char *argv[]){
	char month[10];
	int year, day, result;

	printf("Enter a year/month/day: ");
	scanf("%d %s %d", &year, month, &day);

	while (year > 1000)
	{
		result = cala_days(month, day);
		if(result < 0) 
			printf("Error input, retry.\n");
		else
			printf("The total to %d/%s/%d is %d \n", year, month, day, result);
		
		printf("Enter a year/month/day: ");
		scanf("%d %s %d", &year, month, &day);
//		printf("The total to %d-%s-%d is %d \n", year, month, day, result);
//		printf("The total to %s-%d \n", month, month);
	}
	printf("Done.");
	return 0;
	
}
int cala_days(const char *month, const int day){
	if (day < 1 || day > 31) return -1;
	int total = 0;
	int temp = atoi(month);
	for(int i = 0; i < 12; i++)
	{		
		if((months[i].number == temp)	                \
		|| (strcmp(month, months[i].month_abbrev) == 0) \
		|| (strcmp(month, months[i].month_name) == 0))
		{	
			if (day > months[i].days) return -1; 
			return total + day;
		}			
		else
			total = total + months[i].days;
	}
	return -1;
}