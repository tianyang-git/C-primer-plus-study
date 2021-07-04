// practice 4.4.2.c
#include <stdio.h>
#include <string.h>
#define Q "His Hamlet was funny without being vulgar."
int main (void)
{
	printf("He sold painting for$%2.2f.\n", 2.345e2);
	printf("%c%c%c\n",'H', 105, '\41');
	printf("%s\nIt has %d characters,\nand occupide %d bites.\n", Q, strlen(Q), sizeof(Q));
	printf("Is %2.2e the same as %2.2f\n",1201.0, 1201.0);
}
