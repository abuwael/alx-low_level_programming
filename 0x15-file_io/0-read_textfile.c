#include "main.h"

/**
 * read_textfile - a function that reads a text file and prints it
 *                to POSIX standard output.
 *
 * @filename: file to read
 * @letters: number of letters to read and print from file
 *
 * Return: 0 if it fails or actual number of letters it could
 *         read and print
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fp;
	char *buffer;
	ssize_t reader, count;
	int fileId;

	/*Open File*/
	fp = fopen(filename, "r");

	/*Processing File*/
	if (fp == NULL)
		return (0);

	fileId = fileno(fp);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		free(buffer);
		return (0);
	}

	reader = read(fileId, buffer, letters);
	if (reader == -1)
		return (0);

	count = write(STDOUT_FILENO, buffer, reader);
	if (count == -1 || reader != count)
		return (0);

	free(buffer);
	/*Close File*/
	fclose(fp);

	return (count);
}
