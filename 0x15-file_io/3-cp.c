#include "main.h"
void cp(const char *a, const char *b);
/**
 * main - entry point
 * @argc: number of environnement argument
 * @argv: an array of pointers to the argument
 *
 * Description: rogram that displays the information contained in the ELF
 * header at the start of an ELF file.
 *
 * Return:  if success
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(98);
	}
	cp(argv[1], argv[2]);
	exit(0);
}
/**
 * cp - copy
 * @a: char
 * @b: char
 *
 * Return: void
 */
void cp(const char *a, const char *b)
{
	int start, end, r_only, w_only;
	char buffer[1024];

	start = open(a, O_RDONLY);
	end = open(b, O_CREAT | O_WRONLY | O_APPEND);
	while ((r_only = read(start, buffer, 1024)) > 0)
	{
		if (start == -1 || r_only == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", a);
			exit(98);
		}
		w_only = write(end, buffer, r_only);
		if (end == -1 || w_only == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", b);
			exit(99);
		}
	}
	if (r_only == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", a);
		exit(98);
	}
	if (close(start) == -1)
	{
		dprintf(STDERR_FILENO, "ERROR: Can't close fd %d\n", start);
		exit(100);
	}
	if (close(end) == -1)
	{
		dprintf(STDERR_FILENO, "ERROR: Can't close fd %d\n", end);
		exit(100);
	}
}
