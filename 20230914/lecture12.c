#include <stdio.h>

int main(void)
{
	int count, ox;
	count = 1;

	while (count <= 5)
	{
		ox = 1;
		while (ox <= 5)
		{
			if (count == ox)
			{
				if (count % 2 != 0)
					printf("|O|");
				else
					printf("|X|");
			}
			else
				printf("   ");
			ox++;
		}
		printf("\n");
		printf("---------------\n");
		count++;
	}
	return 0;
}