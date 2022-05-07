#include "main.h"
/**
 * read_textfile - Read a file
 * @filename: File to read
 * @letters: number of letters it should read and print
 * Description: reads a text file and prints it to the POSIX standard output.
 * Return: number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int file, rd = 0, wr = 0, r = 1;
size_t *buffer;

if (filename == NULL)
return (0);

if (letters <= 0)
return (0);

buffer = malloc(sizeof(size_t) * letters);

if (buffer == NULL)
return (0);

file = open(filename, O_RDONLY);

if (file == -1)
r = 0;
else
r = file;

rd = read(file, buffer, letters);

if (rd == -1)
r = 0;
else
r = rd;

wr = write(STDOUT_FILENO, buffer, rd);

if (wr == -1)
r = 0;


close(file);
free(buffer);
return (r);
}
