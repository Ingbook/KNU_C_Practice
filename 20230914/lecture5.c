#include <stdio.h>

int main(void)
{
	int year = 0;

	scanf_s("%d", &year);
	if ((year % 4 == 0 || year % 100 != 0) && year % 400 == 0)
	{
		printf("�����Դϴ�.");
	}
	else
	{
		printf("������ �ƴմϴ�.");
	}

	return 0;
}