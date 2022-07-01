#include <stdio.h>
int main(void)
{
        char ch;
        for(ch= 'a';ch<= 'z';ch++)
        {
            if (ch != 'q' && != 'e')
            {
													                putchar(ch);
	    }
        }
        putchar(10);
        return (0);
}
