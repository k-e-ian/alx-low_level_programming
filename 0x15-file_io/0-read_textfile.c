#include "main.h"

/**
 * read_textfile - function that reads txt file and prints it to POSIX std/out
 * @filename: pointer to file
 * @letters: number of letter to be read and printed
 * Return: letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t openn, readd, writee;
	char *buf;

	if (filename == NULL)
		return (0);

	buf = malloc(sizeof(char) * letters);

	if (buf == NULL)
		return (0);

	openn = open(filename, O_RDONLY);

	readd = read(openn, buf, letters);

	writee = write(STDOUT_FILENO, buf, readd);

	if (openn == -1 || readd == -1 || writee == -1 || writee != readd)
	{
		free(buf);
		return (0);
	}
	free(buf);
	close(openn);

	return (writee);
}
