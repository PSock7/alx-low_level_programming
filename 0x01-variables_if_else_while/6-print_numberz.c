#include <stdio.h>
#include <stdlib.h>
/**
 * main program print all single digit numbers of base 10 starting from 0 followed by the new line
 *
 * return 0
 */

int main(void)
{
	int digit;

	for (digit = '0'; digit <= '9'; digit++)
	{
		putchar(digit);
	}
	putchar('\n');
	return (0);
}
