#include "main.h"

/**
 * print alphabet_x10-> prints lowercase alphabets
 */
void print_alphabet_x10(void)
{
    int j;
    int x;
    for (j = 'a'; j <= 'z'; j++)
    {
        for (j = 'a'; j <= 'z'; j++)
        {
        _putchar(j);
        }
        _putchar('\n');

    }
}