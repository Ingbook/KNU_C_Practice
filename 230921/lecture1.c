#include <stdio.h>

int flag = 1;
int prime(num);

int main(void)
{
	int input = 0;
	int i = 0;
	scanf_s("%d", &input);
	
	int prime(input);

	printf("%d", flag);

	return 0;
}

int prime(num)
{
	for (int j = 2; j <= num; j++)
	{
		if (j == num)
			continue;

		if (num % j == 0)
		{
			flag = 0;
			return flag;
		}
	}
	return flag;
}
