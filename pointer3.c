#include <stdio.h>

int main(void)
{

	char *p = "first text";

	p = "And this is a second text"; /*poiter will point at first character i this text*/
	printf("%c\n", *p);
	return 0;
}