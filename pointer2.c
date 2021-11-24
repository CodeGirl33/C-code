#include <stdio.h>

int main(void)
{

	char *p = "this is some text";
	p[0] = 'a'; /* this will be an error as it is read only, caot modify it*/
	return 0;
}