#include <stdio.h>

// switch
int main(void)
{
	int score = 0;

	scanf_s("%d", &score);
	if (score > 100 || score < 0)
	{
		printf("�߸��� �Է��Դϴ�.");
		return 0;
	}

	int div = score / 10;

	switch (div)
	{
	case 10:
	case 9:
		printf("A����");
		break;
	case 8:
		printf("B����");
		break;
	case 7:
		printf("C����");
		break;
	case 6:
		printf("D����");
		break;
	default:
		printf("F����");
	}

	return 0;
}