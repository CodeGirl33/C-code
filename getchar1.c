#include <stdio.h>

int main(void)
{
	char ch;
	int i;

	printf("Enter a number: ");
	scanf("%d", &i);

	printf("Enter a character: ");
	scanf(" %c", &ch);

	printf("Int = %d, and char = %c\n", i, ch);
	return 0;
	
}