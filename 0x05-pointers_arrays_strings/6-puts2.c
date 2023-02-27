#include "main.h"

/**
 *puts2 - prints part of a string
 *@str: string to be printed
 *
 * Return: void
 **/

/*
 * 1. Declare a function called puts2 that takes a string as an argument.
 * 2. Declare an integer variable called i and initialize it to 0.
 * 3. While loop that will iterate through string,reaches the null character.
 * 4. Inside while loop,if statementchecks if the value of i is divisible by 2.
 * 5. If the value of i divisible by 2, print the character at the index of i.
 * 6. Increment i by 1.
 * 7. After the while loop, print a new line.
*/
/*
 * Time Complexity: O(n)
*/
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
