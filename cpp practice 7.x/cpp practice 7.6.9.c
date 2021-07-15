// cpp practice 7.6.9.c
#include <stdio.h>
int main (int argc, char *argv[])
{
	int datum;
	do{
		printf("Enter a number( 0 to exit): ");
		scanf("%d", &datum);
		if (datum < 2)
		{
			if (datum == 0)
				break; 
			printf("%d is out of range, retry.\n");
			continue;
		}
		
		for (int i = datum ; i > 1; i--)		
		{
			int is_primer = 1;
			for( int j = 2; j < i/2; j++)
			{				
				if(i % j == 0)
				{
					is_primer = 0;
					break;
				}
				if(is_primer)	
					printf("%d, ", i);									
			}
//			if(is_primer)	
//					printf("%d, ", i);				
		}
		printf("\n");
	}while (datum != 0);
	
	printf("Done!");
	return 0;		
}
