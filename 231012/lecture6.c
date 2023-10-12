#include <stdio.h>

void swap(int* a, int* b);

int main(void)
{
	int a = 0, b = 0;

	scanf_s("%d", &a);
	scanf_s("%d", &b);

	printf("\n숫자1 = %d\n숫자2 = %d\n", a, b);
	printf("---------swap()----------");

	swap(&a, &b);

	printf("\n숫자1 = %d\n숫자2 = %d", a, b);

	return 0;
}

void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}