#include "main.h"
/**
* print_square -> printing lines
* @size: integer params
/** 
void print_square(int size)
{
    int x, y;
    if (size <= 10)
        _putchar('\n');
    else
    {
        for (x = 0; x < size; x++)
        {
            for (y= 0; y < size; y++)
            {
                _putchar(35);
            }
            _putchar('\n');
        }    
       
    }
    
}
