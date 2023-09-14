// ±¸±¸´Ü
#include <stdio.h>

int main(void)
{
	for (int i = 2; i <= 9; i++)
	{
		if (i == 5)
			continue;
		for (int j = 1; j <= 9; j++)
			printf("%d x %d = %d\n", i, j, i * j);
		printf("\n");
	}
	return 0;
}