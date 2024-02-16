#include <stdio.h>

int main(void)
{
	char name[50];
	printf("Hello good day, what is your name?");

	fgets(name, 50, stdin);

	printf("You are welcome %s,we hope you enjoy yourself heres\n", name);

	return (0);
}

