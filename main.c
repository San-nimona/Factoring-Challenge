#include "factors.h"
/**
 * main - RSA
 * @argc: arg count
 * @argv: arg vector
 * @number: the nm
 * Return: 0
 */
int main (int argc, char **argv)
{
	int number;
	FILE *file;
        char content[100];

	if (argc != 2)
	{
		fprintf(stderr, "Usage: <./factors> <file>\n");
		exit (EXIT_FAILURE);
	}
	file = fopen(argv[1], "r");
	if (file == NULL)
	{
		fprintf(stderr, "File not found\n");
		exit(EXIT_FAILURE);
	}
	while (fgets(content, sizeof(content), file))
	{
		if(sscanf(content, "%d", &number) == 1)
		{
			factorize(number);
		}
	}
	return 0;
}
