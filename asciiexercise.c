#include <stdio.h>

int main(void)

{

	char myChar;
	printf("Enter a character: ");
	scanf("%c", &myChar);
	printf("%i\n", myChar);

	int myInt;
	printf("Enter a number: ");
	scanf("%i", &myInt);
	printf("%c\n", myInt);

	char maths = myChar + myInt;

	printf("%c + %i\", maths, maths);

	return 0;
}