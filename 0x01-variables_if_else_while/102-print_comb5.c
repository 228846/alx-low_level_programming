#include <stdio.h>
int main(void)
{
	int char;
	int n;
	for (ch =48; ch <= 57; ch++)
	{
		for (n = 48; n <= 57; n++)
		{
			putchar(ch);
			putchar(n);
			if (ch != 56 || ch != 57)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar(10);
	return (0);
}
