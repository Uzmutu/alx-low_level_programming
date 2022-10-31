#include "main.h"
/**
 * append_text_to_file - function that append text to a file.
 * @filename: file
 * @text_content: text to append in the file
 *
 * Return: 1 if success, if filename is NULL return -1
 * If text_content is NULL, do not add anything to the file.
 * Return 1 if the file exists and -1 if the file does not exist
 * or if you do not have the required permissions to write the file
 */
int append_text_to_file(const char *filename, char *text_content)
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
	opened = open(filename, O_WRONLY | O_APPEND);
	if (opened == -1)
		return (-1);
	writer = write(opened, text_content, length);
	if (writer == -1)
		return (-1);
	close(opened);
	return (1);
}
