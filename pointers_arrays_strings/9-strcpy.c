#include "main.h"

/**
 * *_strcpy - function that copies the string pointed to by src
 * @dest: pointer to the buffer
 * @src: string copied
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int j, i;

	j = 0;

	while (src[j] != '\0')
	{
		j++;
	}

	for (i = 0; i < j; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
