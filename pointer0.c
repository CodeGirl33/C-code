#include <stdio.h>

int main(void)
{
	char *p;
	int i;

	p = "This is some text";
	for (i = 0; p[i] != '\0'; i++)
		printf("%c %c\n", *(p + i), p[i]);

	return 0;
}