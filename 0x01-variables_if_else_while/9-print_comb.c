nclude <stdlib.h>
/**
 * Main program return all posssible combienations of single-digit number i.e random
 *
 * return 0
 */
int main(void)
{
        int digit;

        for (digit = '0'; digit <= '9'; digit++)
        {
                putchar(digit);
                if (digit == '9')
                        continue;

                putchar(',');
                putchar(' ');
        }
        putchar('\n');
        return (0);
}

