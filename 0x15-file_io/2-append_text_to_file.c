#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: pointer to file
 * @text_content: content to be appended
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int oPen, wRite, fd;

	if (!filename)
		return (-1);

	oPen = open(filename, O_WRONLY | O_APPEND);
	
	if (text_content != NULL)
	{
		fd = 0;
		while (text_content[fd])
			fd++;
	}

	if (text_content == NULL)
		return (1);

	wRite = write(oPen, text_content, fd);

	if (wRite == -1 || oPen == -1)
		return (-1);

	close(oPen);
	return (1);
}
