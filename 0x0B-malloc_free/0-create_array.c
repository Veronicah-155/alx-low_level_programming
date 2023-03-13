#include "main.h"
/**
 * create array - array for prints a string
 * @size: number elements array
 * @c: char
 * Return: pointer
 */

char *create_array(unsigned int size, char c)
{
	char *array = malloc(size);
	if (size == 0 || array == 0)
		return (NULL);
	while (size --)
		array[size] = c;
        return (array);
}
