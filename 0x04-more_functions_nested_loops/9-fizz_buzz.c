#include <stdio.h>
/**
 *main - program that prints either number
 *or fizz or buzz or fizzbuzz
 *
 *
 *Return: returns 0
 */
/*
 * 1. The while loop is used to iterate through the numbers from 1 to 100.
 * 2.If statement checks if is divisible by 3 and 5. If it is,prints FizzBuzz.
 * 3.If statement checks if is divisible by 3.If it is,prints Fizz.
 * 4.Else if statement checks if is divisible by 5. If it is,prints Buzz.
 * 5. The else statement prints the number.
 * 6. The printf statement prints a new line.
 * 7. The return statement returns 0.
*/
int main(void)
{
	int num;

	while (num++ < 100)

	if ((num % 3 == 0) && (num % 5 == 0))
	printf("FizzBuzz ");

	else if ((num % 3) == 0)
	printf("Fizz ");

	else if ((num % 5) == 0)
	{
	if (num != 100)
	printf("Buzz ");

	else
	printf("Buzz");
	}
	else
	printf("%d ", num);

	printf("\n");
	return (0);
}
