#include <stdio.h>
#include <ctype.h>
/**
 * main program print alphabet letter followed by new line
 *
 *
 */



int main(void)
{
	int alphabet;
	
	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		alphabet = tolower(alphabet);
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
