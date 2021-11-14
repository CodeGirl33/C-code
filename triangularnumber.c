#include <stdio.h>

int main(void)

{

	int n, number, triangularNo;

	printf("What triangular number do you want? ");
	scanf("%i", &number);

	triangularNo = 0;

	for ( n = 1; n <= number; n++)
		triangularNo += n;
	

		printf("Triangular number  %i is %i\n", number, triangularNo);
	
		return 0;
}