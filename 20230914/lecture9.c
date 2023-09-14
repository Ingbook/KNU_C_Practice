#include <stdio.h>

int main()
{
	int i;
	int sum = 0;
	int val = 1;
	for (i = 0; i < 10; i++)
	{
		sum += val;
		val++;
	}

	printf("sum = %d\n", sum);
	return 0;
}