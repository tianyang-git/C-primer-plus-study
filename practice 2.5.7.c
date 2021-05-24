// practice 2.5.7
#include <stdio.h>
int smile (void);
int main (void)
{
	smile();smile();smile();
	printf("\n");
	smile();smile();
	printf("\n");
	smile();
	
	return 0;
}
int smile(void)
{
	printf("smile!");
	return 0;
}
