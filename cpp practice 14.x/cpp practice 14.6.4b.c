// cpp practice 14.6.4b.c 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct user_id{
	char sid[30];
	struct {
		char fname[15];
		char mname[15];
		char lname[15];	
	};
}user_list[5] = {{"302039823", "Flossia", "Mike", "Dribble"}};

void print_user_id(struct user_id user);

int main(int argc, char * argv[])
{
	printf("Test to print struct contents:\n");
	print_user_id(user_list[0]);
	return 0;
}

void print_user_id(struct user_id user)
{
	if(strlen(user.sid) < 9) return;
	printf("USERID: %s, ", user.lname);
	printf(" %s ", user.fname);
	if(strlen(user.mname) > 0) printf("%c. ", user.mname[0]);
	printf("-- %s", user.sid);
	printf("\n");
	return;
}


