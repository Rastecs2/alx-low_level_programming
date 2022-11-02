#include "main.h"

/**
 * create_file - a function that creates a file
 *
 * @filename: name of the file to create
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 (SUCCESS), -1 (FAIL)
*/
int create_file(const char *filename, char *text_content)
{
	int file, status, text = 0;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (file == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[text] != '\0')
			text++;

		status = write(file, text_content, text);
		if (status == -1)
			return (-1);
	}

	close(file);
	return (1);
}
