// cpp practice 14.6.8.c

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define NUM 12

struct seat{
	int id;
	int booked;
	char fname[20];
	char lname[20];
} list[NUM] = {};

void show_menu(void);
void get_empty(struct seat list[]);     // 显示空余座位数量 
void show_empty(struct seat list[]);    // 显示空余座位编号 
void show_booked(struct seat list[]);   // 显示已预定的座位信息和客户信息 
void book_seat(struct seat list[]);     // 预定座位 
void cancel_book(struct seat list[]);   // 取消预订 

int main(int agrc, char * agrv[]){
	char selected;
	show_menu();
	while((selected = getchar()) != 'f')
	{
		switch(selected)
		{
			case 'a':
				get_empty(list);
				break;
			case 'b':
				show_empty(list);
				break;
			case 'c':
				show_booked(list);
				break;
			case 'd':
				book_seat(list);
				break;
			case 'e':
				cancel_book(list);
				break;
			default:
				break;
		}
		while(getchar() != '\n')
			continue;
		show_menu();
	} 
	return 0;
} 

void show_menu(void){
	puts("To choose a function, enter its letter label:\n");
	puts("a)Show number of empty seats");
	puts("b)Show list of empty seats");
	puts("c)Show alphabetical list of seats");
	puts("d)Assign a customer to a seat assignment");
	puts("e)Delete a seat assignment");
	puts("f)Quit");
}


void get_empty(struct seat list[])     // 显示空余座位数量 
{
	int sum = 0;
	for(int i = 0; i < NUM; i++)
		if(list[i].booked == 0) sum++;
	printf("There are %d seats empty\n", sum); 
}

void show_empty(struct seat list[])    // 显示空余座位编号
{
	for(int i = 0; i < NUM; i++)
		if(list[i].booked == 0) 
			printf("No %d is empty\n", i+1);
}

void show_booked(struct seat list[])   // 显示已预定的座位信息和客户信息
{
	struct seat * ptstr[NUM];
	for(int i = 0; i < NUM; i++)
		ptstr[i] = &list[i];
	int top, seek;
	struct seat * temp;
	for(top = 0; top < NUM; top++)
		for(seek = 0; seek < NUM; seek++)
			if(strcmp(ptstr[top] -> fname, ptstr[seek] -> fname) >  0)
			{
				temp = ptstr[top];
				ptstr[top] = ptstr[seek];
				ptstr[seek] = temp;
			}
	puts("Alphabetical list:");
	for(int i = 0; i < NUM; i++)
		if(ptstr[i] -> booked == 1)
			printf("Seat No:%d book by %s.%s\n", i+1, ptstr[i] -> fname, ptstr[i] -> lname);
}

void book_seat(struct seat list[])     // 预定座位 
{
	int id;
	char fname[20], lname[20];
	show_empty(list);
	puts("Please select the seat:");
	scanf("%d", &id);
	if(list[id-1].booked == 1)
	{
		puts("Error selected.");
		return;
	}
	list[id - 1].id = id;
	puts("Please input your FIRST_NAME LSAT_NAME:");
	scanf("%s %s", fname, lname);
	strcpy(list[id - 1].fname, fname);
	strcpy(list[id - 1].lname, lname);
	list[id - 1].booked = 1;
	puts("Booked!");
}

void cancel_book(struct seat list[])   // 取消预订 
{	
	show_booked(list);
	int id;
	puts("Please select the seat to cancel:");
	scanf("%d", &id);
	if(list[id - 1].booked == 0)
	{
		puts("Error selected.");
		return;
	}
	list[id - 1].booked = 0;
}		












