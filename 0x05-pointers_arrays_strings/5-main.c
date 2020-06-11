#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char s[10] = "Holberton";
    char k[1] = "K";
    char o[3] = "for";

    printf("%s\n", s);
    rev_string(s);
    printf("%s\n", s);

    printf("%s\n", k);
    rev_string(k);
    printf("%s\n", k);

    printf("%s\n", o);
    rev_string(o);
    printf("%s\n", o);
    return (0);
}
