#include "main.h"
/**
 * read_textfile - function that reads a text file and prints it to
 * the POSIX standard output.
 * @filename: a pointer to the file
 * @letters: number of letters to read and print
 *
 * Return: if the file can not be opened or read, return 0
 * if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int opened;
	int r_only;
	int w_only;
	char *buff = malloc(sizeof(char) * letters);

	if (!filename)
		return (0);
	if (!buff)
		return (0);
	opened = open(filename, O_RDONLY);
	r_only = read(opened, buff, letters);
	if (opened == -1 || r_only == -1)
	{
		free(buff);
		return (0);
	}
	w_only = write(STDOUT_FILENO, buff, r_only);
	if (w_only == -1)
	{
		free(buff);
		return (0);
	}
	free(buff);
	close(opened);
	return (w_only);
}
