#include "main.h"
/**
 * string_toupper -> converting any string to uppercase
 * @x: string param
 * Return: string
 */
char *string_toupper(char *)
{
    int i = 0;   

    while (x[1])
    {
        if (x[i] >= 97 && x[i] <= 122)
            x[i] = x[i] - 32;
        i++;
    }
    return (x);
} 