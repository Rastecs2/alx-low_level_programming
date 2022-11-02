#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 *
 * @filename: name of the file
 * @text_content: string to add at the end of the file
 *
 * Return: 1 (SUCCESS), -1 (FAIL)
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int file, status, text = 0;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_APPEND | O_WRONLY);
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
