#include <stdio.h>

int main(void)
{
	int score[5] = { 87, 92, 94, 65, 33 };
	int cnt;


	int* p_score = score;			//배열을 지정하면 배열의 첫번째 주소값으로 저장

	for (cnt = 0; cnt < 5; cnt++) {
		printf("%d\n", *p_score);
		p_score++;
	}

	return 0;
}