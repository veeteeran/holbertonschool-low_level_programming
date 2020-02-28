#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints min number of coins to make change
 * 
 *
 *
 * Return: Always 0 (Success)
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	int money;
	int cents[5] = {25, 10, 5, 2, 1};
	int i, change, count = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		i = 0;
		money = atoi(argv[1]);
		while (money != 0)
		{
			if (money >= cents[i])
			{
				change = money / cents[i];
				money = money % cents[i];
				count += change;
			}
			else if (money < 0)
			{
				printf("0\n");
			}
			i++;
		}
		printf("%d\n", count);
	}
	return (0);
}
