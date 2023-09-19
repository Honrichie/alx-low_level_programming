#include <main.h>
/**
 * _strlen - returns the lenghth of a string
 * @s: string
 * Return: lenghth
 */
int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}

	return (longi);
