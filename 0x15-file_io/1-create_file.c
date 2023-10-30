#include "main.h"

/**
 * create_file - a function that creates a file
 *
 * @filename: name of file to create
 * @text_content: string to write to file
 *
 * Return: 1 on success OR -1 on faliure
*/

int create_file(const char *filename, char *text_content)
{
	int fb, writter, count = 0;

	if (filename == NULL)
		return (-1);

	fb = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fb == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[count] != '\0')
			count++;

		writter = write(fb, text_content, count);
		if (writter == -1)
			return (-1);
	}

	close(fb);
	return (1);
}
