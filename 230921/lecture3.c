#include <stdio.h>

long long int result = 1;
long long int factorial(num);

int main(void)
{
	int input = 0;
	scanf_s("%d", &input);
	
	printf("%lld", factorial(input));
	return 0;
}

long long int factorial(int num)
{
	if (num == 0)
		return 1;

	return num * factorial(num - 1);
}