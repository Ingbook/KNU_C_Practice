#include <stdio.h>

int main(void)
{
	int input = 0;
	
	scanf_s("%d", &input);

	if (input > 0)
		printf("입력한 정수 %d는 양의 정수입니다.", input);
	else if (input < 0)
		printf("입력한 정수 %d는 음의 정수입니다.", input);
	else
		printf("0입니다.");

	return 0;
}