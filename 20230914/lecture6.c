#include <stdio.h>

int main(void)
{
	int input = 0;
	
	scanf_s("%d", &input);

	if (input > 0)
		printf("�Է��� ���� %d�� ���� �����Դϴ�.", input);
	else if (input < 0)
		printf("�Է��� ���� %d�� ���� �����Դϴ�.", input);
	else
		printf("0�Դϴ�.");

	return 0;
}