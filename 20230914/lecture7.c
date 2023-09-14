#include <stdio.h>

// if-else
int main(void)
{
	int score = 0;
	
	scanf_s("%d", &score);

	if (score > 100 || score < 0)
		printf("잘못 입력하였습니다.");
	else if (score > 90)
		printf("A학점");
	else if (score > 80)
		printf("B학점");
	else if (score > 70)
		printf("C학점");
	else if (score > 60)
		printf("D학점");
	else
		printf("F학점");

	return 0;
}