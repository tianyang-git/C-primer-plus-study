/* praise.2 */
//如果编译器不识别%zd, 尝试换成%u或%lu
#include <stdio.h>
#include <string.h> /* 提供 strlen() 函数的原型 */
#define PRAISE "You are an extraordinary being."
int main(void)
{
	char name[40];

	printf("What's your name? ");
	scanf("%s", name);
	printf("Your mane of %zd letters occupies %zd memory cells.\n",strlen(name), sizeof name);
	printf("The phrase of praise has %zd letters ", strlen(PRAISE));
	printf("and your name occpies %zd memory cells.\n", sizeof PRAISE);

	return 0;
	         
}
