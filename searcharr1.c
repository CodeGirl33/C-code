#include <stdio.h>

#define SIZE 10

int linear_search(double arr[], int size, double num, int *t);

int main(void)

{

	int i, times, pos;
	double num, arr[SIZE];

	for(i = 0; i < SIZE; i++)
	{
		printf("Enter a number: ");
		scanf("%lf", &num);
		if (num == -1)
				break;
		arr[i] = num;
	}
	printf("Enter number to search: ");
	scanf("%lf", &num);

	pos = linear_search(arr, i, num, &times);

	if (pos == -1)
		printf(" %f not found\n", num);
	else
		printf("%f appears %d times (first pos = %d)\n", num, times, pos);
	return 0;
}

int linear_search(double arr[], int size, double num, int *t)
{
	int i, pos;
	pos = -1;
	for (i = 0; i < size; i++)
	{
		if (arr[i] == num)
		{
			(*t)++;
			if (pos == -1)
				pos = i;
		}

	}
	return pos;
}