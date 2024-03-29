#include "main.h"

/**
 * create_file - a function that creates a file
 * @filename: name of file to be created
 * @text_content: null terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, opEn, wrIte;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		fd = 0;
		while (text_content[fd])
			fd++;
	}

	opEn = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (text_content == NULL)
	{
		close(opEn);
	}
	else
		wrIte = write(opEn, text_content, fd);

	if (wrIte == -1 || opEn == -1)
		return (-1);

	close(opEn);
	return (1);
}
