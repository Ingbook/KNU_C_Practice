#include <stdio.h>

void calculator(int sel, int num1, int num2);

int main(void)
{
	int sel, num1, num2;
	
	printf("숫자 1을 입력하시오 : ");
	scanf_s("%lf", &num1);

	printf("숫자 2를 입력하시오 : ");
	scanf_s("%lf", &num2);

	printf("1.더하기 2.빼기 3.곱하기 4.나누기 : ");
	scanf_s("%d", &sel);

	calculator(sel, num1, num2);

	return 0;
}

int sum(num1, num2)
{
	return num1 + num2;
}

int sub(num1, num2)
{
	return num1 - num2;
}

int mul(num1, num2)
{
	return num1 * num2;
}

int div(num1, num2)
{
	return num1 / num2;
}

void calculator(int sel, int num1, int num2)
{
	if (sel < 1 || sel > 4)
		printf("오류");
	if (sel == 1) sum(num1, num2);
	else if (sel == 2) sub(num1, num2);
	else if (sel == 3) mul(num1, num2);
	else if (sel == 4) div(num1, num2);
}