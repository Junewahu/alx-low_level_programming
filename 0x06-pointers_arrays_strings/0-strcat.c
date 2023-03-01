#include "main.h"

/**
 * _strcat - concatenates the string pointed to by @src to
 * the end of the string pointed to by @dest
 *@dest: String that will append
 *@src: string that will be concatenated upon
 *
 * Return: returns pointer to @dest
 */

/*
 * 1.declaring a function _strcat,takes two arguments: dest and src.
 * 2.  Next, we’re declaring two variables: index and dest_len.
 * 3.while loop to iterate through the dest string and find its length.
 * 4.for loop,through the src string,append each character to the end
 * 5.  Finally, we’re returning the dest string.
*/
/*
 * Time Complexity: O(n)
*/
char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
