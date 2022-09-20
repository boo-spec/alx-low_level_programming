#include "main.h"
/**
 *puts- prints out to stdout with new line
 *@str: checked
 *Return:nothing
 */
void _puts(char *str)
{
	if (str)
	{
		while (*str)
		{
			putchar(*str++);
		}
	}
	putchar('\n');
}
