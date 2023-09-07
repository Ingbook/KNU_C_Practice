#include <stdio.h>

int main(void)
{
	int a = 0;
	scanf_s("%d", &a);
	int b = 0;
	scanf_s("%d", &b);

	printf("%d", a + b);

	return 0;
}