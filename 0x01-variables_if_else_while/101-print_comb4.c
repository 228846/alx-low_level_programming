#include <stdio.h>
int main(void)
{
	int char;
	int n;
	for(ch = 48; ch <= 57; ch++)
	{
		for(n =49; n <= 57; n++)
		{
			if(n > ch && m >n)
			{
				putchar(ch);
				putchar(n);
				putchar(m);
				if (ch != 55 || n !=56 || n != 57)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}	
		
	putchar(10);
	return (0);

}
