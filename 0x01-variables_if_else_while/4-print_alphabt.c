#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)

{

char i;
char c;
c = 'i';

while (i <= 'z')
{
if ((i != 'q' && i != 'e') c <= 'z')
putchar(i);
c++;
}
putchar('\n');

return (0);
}
