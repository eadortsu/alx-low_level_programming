#include "main.h"

/**
* create_file - function that creates a file
* @filename: name of the file to create
* @text_content: NULL terminated string to write to the file
* Returns: 1 on success, -1 on failure, if filename is NULL return -1,
*          if text_content is NULL create an empty file
*/

int create_file(const char *filename, char *text_content)
{
int op, wr, len = 0;

if (filename == NULL)
return(-1);

if (text_content == NULL)
{
for(len = 0; text_content[len];)
len ++;
}

op = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
wr = write(op, text_content, len);

if(op == -1 || wr == -1)
return(-1);

close(op);

return(1);

}
