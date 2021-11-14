#include <stdio.h>

 int main(void)
{
long long n;
 int count = 0;

 printf("enter a number: \n");

 scanf("%lld", &n);

 while(n != 0)
 {
 	n = n/10;
 	count++;
 }

 printf("Digits: %i\n", count);

	return 0;
}