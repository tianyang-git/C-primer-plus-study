// films2.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TSIZE 45

struct film{
	char title[TSIZE];
	int rating;
	struct film * pre;
	struct film * next;
};

char * s_gets(char * st, int n);

int main(int argc, char *argv[])
{
	struct film * head = NULL;
	struct film *prev, *current;
	char input[TSIZE];
	
	puts("Enter first movie title:");
	while(s_gets(input, TSIZE) != NULL && input[0] != '\0')
	{
		current = (struct film *)malloc(sizeof(struct film));
		if(head == NULL)
			head = current;
		else
		{
			prev -> next = current;
			current -> pre = prev;
		}				
		current -> next = NULL;
		strcpy(current -> title, input);
		puts("Enter your rating <0 - 10>:");
		scanf("%d", &current -> rating);
		while(getchar() != '\n')
			continue;
		puts("Enter next movies title (empty line to stop):");
		prev = current; 
	}
	if(head == NULL)
		puts("No data entered. ");
	else
		puts("Here is the movie list(by sequence):\n");
	
	current = head;
	while(current != NULL)
	{
		printf("Movie: %s Rating : %d\n", current -> title, current -> rating);
		current = current -> next;
	}
	
	puts("Here is the movie list(by inverted sequence):");
	current = prev;
	while(current != NULL)
	{
		printf("Movie: %s Rating : %d\n", current -> title, current -> rating);
		current = current -> pre;
	}
		
	current = head;
	while(current != NULL)
	{
		head = current -> next;
		free(current);
		current = head;
	}
	printf("Bye!");
	return 0;
}

char * s_gets(char * st, int n)
{
	char * re_val;
	char * find;
	re_val = fgets(st, n, stdin);
	if(re_val)
	{
		find = strchr(st, '\n');
		if(find)
			*find = '\0';
		else
			while(getchar() != '\n')
				continue;
	}
	return re_val;
}







