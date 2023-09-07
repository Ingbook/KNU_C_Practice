#include <stdio.h>

int main(void)
{
	int n = 0;
	scanf_s("%d", &n);

	for (int a = 0; a < n; a++)
	{
		for (int b = a; b <= n - 1; b++)
			printf(" ");

		for (int c = 0; c <= (a * 2); c++)
			printf("*");

		printf("\n");
	}

	return 0;
}