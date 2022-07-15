#include "main.h"
#include <string.h>

/**
* _strncat -> function to join two strings
* @dest: param1
* @src: param2
* @n: param3
* Return: string
*/

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
