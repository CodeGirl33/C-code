#include <stdio.h>

void gdc (int u, int v);
int main(void)

{

	gdc (150, 35);
	gdc (1026, 405);
	gdc (83, 240);

	return 0;
}

void gdc (int u, int v)

{

	int temp;

	printf("The GCD of %i and %i is ", u, v );

	while (v != 0)
	{
		temp = u % v;
		u = v;
		v = temp;
	}

	printf("%i\n", u);

	
}