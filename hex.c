#include <stdio.h>

int main(void)
{
	int i = 1;

	for (;i <= 10; i++)
	{
		printf("This is the value of %d in hexa-decimal number system = %#x\n",i,i);
	}

	return (0);
}
