#include <stdio.h>
#include <ctype.h>
/**
 *Main program print alphabet in lowercase followed a new line except q and e
 *
 *
 */


int main(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter == 'q' || letter == 'e')
		{
			continue;
		}
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
