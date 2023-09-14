#include <stdio.h>

// switch
int main(void)
{
	int score = 0;

	scanf_s("%d", &score);
	if (score > 100 || score < 0)
	{
		printf("잘못된 입력입니다.");
		return 0;
	}

	int div = score / 10;

	switch (div)
	{
	case 10:
	case 9:
		printf("A학점");
		break;
	case 8:
		printf("B학점");
		break;
	case 7:
		printf("C학점");
		break;
	case 6:
		printf("D학점");
		break;
	default:
		printf("F학점");
	}

	return 0;
}