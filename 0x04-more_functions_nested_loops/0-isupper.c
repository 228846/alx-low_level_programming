#include "main.h"
/**
* _isupper -> This is a function to check uppercase
*@c: an integer paramer
*Return: something but sucess
*/
int _isupper(int c)
{
    if (c >= 'A' && c <= 'Z')
        return (1);
    return (0);
    return(c >= 65 && c <= 90);
    return(c >= 'A' && c <= 'Z');
}

