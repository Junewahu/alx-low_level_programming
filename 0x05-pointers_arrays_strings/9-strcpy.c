#include "main.h"
/**
 *_strcpy - Copy paste String
 *@dest: destination
 *@src: source
 *Return: dest
 */

/*
 * 1. FX two arguments,pointer to char and a pointer to char
 * 2. The function returns a pointer to a char (a string).
 * 3. FX copies the string pointed to by src
 * 4. The string not overlap,destination string dest must be large
 * 5. The function returns a pointer to the destination string dest.
*/
/*
 * Time Complexity: O(n)
*/
char *_strcpy(char *dest, char *src)
{
	int inc = 0;

	while (*(src + inc) != '\0')
	{
		*(dest + inc) = *(src + inc);
		inc++;
	}
	*(dest + inc) = '\0';

	return (dest);
}
