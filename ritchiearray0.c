#include <stdio.h>

int main(void)
{
	/* counts digits, white spaces others */
	int c, i, nwhite, nother;
	int ndigit[10];

	nwhite = nother = 0;

	for (i = 0; i < 10; i++){
		ndigit[i] = 0;
		printf("%d", c);
	}
	while (getchar() != EOF)
		if (c >= '0' && c <= '9'){
			++ndigit[c - '0'];
			printf("%c", c);
		}
		else if (c == ' ' || c == '\n'|| c == '\t')
			++nwhite;
		else
			++nother;

		printf("digits = ");
		for (i = 0; i < 10; ++i)
			printf(" %d", ndigit[i]);
		printf(", white spaces = %d, other = %d\n", nwhite, nother);



}