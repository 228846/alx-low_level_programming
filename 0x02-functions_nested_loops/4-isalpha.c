#include "main.h"
/**
 * _isalpha - checks for alphabetical letters
 * @c: a character to be checked
 * Return: returns 0 or 1 depending on conditons
 */
int _isalpha(int c)
{
    return((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
} 
 