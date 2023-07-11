#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: n args
 * @argv: arr args
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int e;

	for (e = 0; e < argc; e++)
		printf("%s\n", argv[e]);
	return (0);
}

