// cpp practice 14.6.3
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXTITL 40
#define MAXAUTL 40
#define MAXBKS 100

struct book{
	char title[MAXTITL];
	char author[MAXAUTL];
	float value;	
};

char * s_get(char * st, int n);
void list_book(struct book library[], int count);
void list_book_title(struct book library[], int count);
void list_book_value(struct book library[], int count);

int main(int argc, char * argv[]){
	struct book library[MAXBKS];
	int count = 0;
	int index;
	printf("Please enter the book title.\n");
	printf("Press [Enter] at the start of a line to stop.\n");
	
	while(count < MAXBKS && s_get(library[count].title, MAXTITL) != NULL && library[count].title[0] != '\0')
	{
		printf("Now enter the author.\n");
		s_get(library[count].author, MAXAUTL);
		printf("Now enter the value.\n");
		scanf("%f", &library[count++].value);
		while(getchar() != '\n')
			continue;
		if(count < MAXBKS)
			printf("Enter the next title.\n");
	}
	if(count > 0)
	{
		list_book(library, count);
		printf("\n");
		list_book_title(library, count);
		printf("\n");
		list_book_value(library, count);
		printf("\n");	
	}
	else
		printf("No books? Too bad.\n");
	return 0;
}

char * s_get(char * st, int n){
	char * ret_val;
	char * find;
	ret_val = fgets(st, n, stdin);
	if(ret_val)
	{
		find = strchr(st, '\n');
		if(find)
			*find = '\0';
		else
			while(getchar() != '\n')
				continue;
		} 
	return ret_val;
}
void list_book(struct book library[], int count){
	printf("Here is the list of your book:\n");
	for(int index = 0; index < count; index++)
	{
		printf("%s by %s: $%.2f.\n", library[index].title, library[index].author, library[index].value);
	}
}

void list_book_title(struct book library[], int count){
	char * ptitle[count];
	char * temp;
	int top, seek;
	
	for(int index = 0; index < count; index++)	
		ptitle[index] = library[index].title;
	for(top = 0; top < count - 1; top++)
		for(seek = top + 1; seek < count; seek++)		
			if(strcmp(ptitle[top], ptitle[seek]) > 0)
			{
				temp = ptitle[top];
				ptitle[top] = ptitle[seek];
				ptitle[seek] = temp;	
			}
	printf("Here is the list of your books by title: \n");
	for(int index = 0; index < count; index++)
		for(int i = 0; i < count; i++)
			if(ptitle[index] == library[i].title)
				printf("%s by %s: $%.2f\n", library[i].title, library[i].author, library[i].value);	
}

void list_book_value(struct book library[], int count){	
	float * pvalue[count];
	float * temp;
	int top, seek;	
	for(int index = 0; index < count; index++)	
		pvalue[index] = &library[index].value;
	for(top = 0; top < count - 1; top++)
		for(seek = top + 1; seek < count; seek++)		
			if(*pvalue[top] > *pvalue[seek])
			{
				temp = pvalue[top];
				pvalue[top] = pvalue[seek];
				pvalue[seek] = temp;	
			}
	printf("Here is the list of your books by title: \n");
	for(int index = 0; index < count; index++)
		for(int i = 0; i < count; i++)
			if(*pvalue[index] == library[i].value)
				printf("%s by %s: $%.2f\n", library[i].title, library[i].author, library[i].value);	
}


































































	
