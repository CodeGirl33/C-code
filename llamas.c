#include <stdio.h>

int main(void)

{

int n; // initial number of llamas
int f; // final umber of llamas
int b; // llamas born each year
int d; // llamas dead each year
int y; // years eeded

do
{

	printf("Enter initial number of llamas: \n");
	scanf("%i", &n);
}
while (n < 9 ); 

do
{

printf("Enter final number of llamas: \n");
scanf("%i", &f);
}
while (f < n);

for (y = 0; n < f; y++)
{
	b = n / 3;
	d = n / 4;
	n = n + (b - d);
}

	printf("Number of years: %i\n", y);
}