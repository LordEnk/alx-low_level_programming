#include <stdio.h>

/**
 * main - prints the program name
 * @argc: 8s tge ltlength of argv
 * @argv: string array of the program
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int i = 0;
	while (argv[i] != '\0')
	{
		putchar(argv[i]);
		i++;
	}
	putchar('\n');
	return (0);
