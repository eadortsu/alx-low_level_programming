#include "main.h"
#include <stdlib.h>


/**
* read_textfile - function that reads a text file and prints it to the POSIX standard output
* @filename: pointer that points to the name of the file
* @letters: number of letters to be read and printed
* Return: if the file can not be opened or read, return 0
*         if filename is NULL return 0,
*         if write fails or does not write the expected amount of bytes, return 0
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t op, rd, wr;
char *buff;

if (filename == NULL)
return(0);

buff = malloc(sizeof(char) * letters);

if (buff == NULL)
return(0);

op = open(filename, O_RDONLY);
rd = read(op, buff, letters);
wr = write(STDOUT_FILENO, buff, rd);

if (op == -1 || rd == -1 || wr == -1 || wr != rd)
{
free(buff);
return(0);
}

free(buff);
close(op);

return(wr);

}
