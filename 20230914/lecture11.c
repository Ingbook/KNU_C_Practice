#include <stdio.h>
//±¸±¸´Ü
int main(void)
{
	int i = 2;
	int j = 1;

	while (i <= 9)
	{
		if (i == 5)
		{
			i++;
			continue;
		}
		while (j <= 9)
		{
			printf("%d x %d = %d \n", i, j, i * j);
			j++;
		}
		i++;
		j = 1;
		printf("\n");
	}

	return 0;
}