// practice 3.6.5
#include <stdio.h>
int main(void)
{
	float g, h;
	float tax, rate;
	
	g = 1e21;
	rate = 0.08;
	tax = rate * g;
	h = g + tax;
	
	printf("You own $%.2f plus $%.2f in taxes for a total of $%.2f.\n",g , tax, h);
	
	return 0;
}
