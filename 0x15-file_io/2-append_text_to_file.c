#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: parametre
 * @text_content: parametre
 * Return: 0
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, text, w;

	if (filename == NULL)
		return (-1);
	text = 0;
	if (text_content != NULL)
		while (text_content[text])
			text++;
	fd = open(filename, O_WRONLY | O_APPEND);
	w = write(fd, text_content, text);
	if (w == -1)
		return (-1);
	close(fd);
	return (1);
}
