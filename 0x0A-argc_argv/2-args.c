#include "main.h"
#include <stdio.h>
/**
 * main - check the code
 *@argc: parametre
 *@argv: parametre
 * Return: Always 0.
 */
int main(int argc __attribute__ ((unused)), char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
