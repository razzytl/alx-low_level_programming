#include "main.h"

/**
 * _strlen - find the linght of a string
 * @s: string
 * Return: int
*/

int _strlen(char *s)
{
	int size = 0;

	for (; s[size] != '\0' ; size++)
	;
	return (size);
}
