#include <stdio.h>

int main(void)
{
	char *str = "Hello";
	int i;

	i = 0;
	while (str++)
	{
		putchar(*(str + i));
		i++;
	}
}
