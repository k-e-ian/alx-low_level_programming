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

	fd = 0;
	while (text_content[fd])
		fd++;

	opEn = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (text_content == NULL)
	{
		close(opEn);
		return (-1);
	}
	else
		wrIte = write(opEn, text_content, fd);

	if (opEn == -1 || wrIte == -1)
	{
		return (-1);
		write(STDOUT_FILENO, "fails", 5);
	}

	close(opEn);
	return (1);
}
