#include "main.h"

/**
 * append_text_to_file - Used to append an  text at the end of the file.
 *
 * @filename: Pointes to the name of file.
 * @text_content: A string to be added to the end of file.
 *
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fp, writter, count = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (count = 0; text_content[count];)
			count++;
	}

	fp = open(filename, O_WRONLY | O_APPEND);
	writter = write(fp, text_content, count);

	if (fp == -1 || writter == -1)
		return (-1);

	close(fp);

	return (1);
}
