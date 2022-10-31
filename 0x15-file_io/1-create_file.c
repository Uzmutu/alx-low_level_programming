#include "main.h"
/**
 * create_file - function that creates a file.
 * @filename: file to create
 * @text_content: text to fill the file
 *
 * Return: 1 if success, if filename is NULL return -1
 * if text_content is NULL create an empty file
 */
int create_file(const char *filename, char *text_content)
{
	int opened;
	int writer;
	int length;

	if (!filename)
		return (-1);
	if (text_content)
	{
		for (length = 0; text_content[length]; length++)
			;
	}
	opened = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (opened == -1)
		return (-1);
	writer = write(opened, text_content, length);
	if (writer == -1)
		return (-1);
	close(opened);
	return (1);
}
