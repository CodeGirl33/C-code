#include <stdio.h>
#include <string.h>

int main(void)

{
int arr1[] = {2, 4, 6, 8};

int length = sizeof(arr1)/(arr1[0]);

int arr2[length];

for (int i = 0; i < length; i++)
{
	arr2[i] = arr1[i];
}

printf("elements of first array: \n");

for (int i = 0; i < length; i++)
{
	printf("%d ", arr1[i]);
}
printf("\n");

printf("elements of arr2: \n");

for (int i = 0; i < length; i++)
{
	printf("%d ", arr2[i]);
}
return 0;
}