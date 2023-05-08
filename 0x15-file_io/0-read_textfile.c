#include "main.h"
/**
 * read_textfile - check the code
 * @filename: parametre
 * @letters: parametre
 * Return: 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *a;
	ssize_t fp;
	ssize_t c;
	ssize_t b;

	fp = open(filename, O_RDONLY);
	if (fp == -1)
		return (0);
	a = malloc(sizeof(char) * letters);
	b = read(fp, a, letters);
	c = write(STDOUT_FILENO, a, b);

	free(a);
	close(fp);
	return (c);
}
