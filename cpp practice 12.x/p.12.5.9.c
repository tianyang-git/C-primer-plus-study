// p.12.5.9.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
	int amount;
	printf("How many words do you wish to enter?");
	scanf("%d", &amount);
	printf("Enter %d words now: ", amount);
	char **pst = (char**)malloc(amount * sizeof(char*));
	// 每个 pst 都指向字符串的首地址，首地址是 char * 类型
	for(int i = 0; i < amount; i++)
	{
		char temp[100];
		scanf("%s", temp);
		int length = strlen(temp);
		char * str = (char *)malloc(length * sizeof(char));
		strcpy(str, temp);
		*(pst + i) = str;
	}
	for(int i = 0; i < amount; i++)
		printf("%s\n", *(pst + i));
	free(pst);
	printf("Done!");
	return 0;
}
