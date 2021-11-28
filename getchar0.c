#include <stdio.h>

int main(void)
{
	/* copy input to output Ritchie book*/
	int c;

	c = getchar();
	while (c != EOF) {
		putchar(c);
		c = getchar();
	
	}
}