#include <stdio.h>
#include <unistd.h>
/**
 * main - The c program that prints a line to a standard error
 * Return: 1 (success)
 */
int main(void)
{
	fput(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", stdout);
	return (1);
}
