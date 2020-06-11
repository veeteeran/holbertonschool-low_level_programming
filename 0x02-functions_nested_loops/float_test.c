#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	int normal = 1836311903;
	char buffer[11];
	itoa(normal, buffer, 10);
	printf("String is %s\n", buffer);
}
