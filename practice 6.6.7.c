// practice 6.6.7.c
#include <stdio.h>
#include <string.h>
int main(void)
{
	char word[40];
	printf("Enter a word:");
	scanf("%s", word);
	printf("The word you enter is : %s\n", word);
	printf("The reverse words you enter is : ");
	int length = strlen(word);
	for (int i = length - 1 ; i >= 0; i--)
	{
		printf("%c", word[i]);
	}
	 return 0;
}
