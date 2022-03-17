#include "main.h"

/**
* append_text_to_file - appends text at the end of a file
* @filename: name of the file
* @text_content: text to append
* Return: 1 on success and -1 on failure
* Do not create the file if it does not exist,
* If filename is NULL return -1,
* text_content is NULL, do not add anything to the file.
* Return 1 if the file exists and -1 if the file does not exist
*
*/

int append_text_to_file(const char *filename, char *text_content)
{
int op, wr, len = 0;

if (filename == NULL)
return (-1);

if (text_content != NULL)
{
for (len = 0; text_content[len];)
len++;
}

op = open(filename, O_APPEND | O_WRONLY);
wr = write(op, text_content, len);

if (op == -1 || wr == -1)
return (-1);

close(op);

return (1);
}
