#include <stdlib.h>
#include <stdio.h>

int main(int argc, char ** argv)
{
	char usrname[50];
	printf("Hello, world\n");
	printf("Enter your name: ");
	scanf("%s", usrname);
	printf("Welcome %s\n", usrname);
	return 0;
}
