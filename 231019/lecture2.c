#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int N;
	float sum = 0;
	scanf_s("%d", &N);

	int* student = (int*)malloc(N * sizeof(int));
	for (int i = 0; i < N; i++) {
		printf("학생 # %d-%d 성적 입력 : ", N, i);
		scanf_s("%d", &student[i]);
	}

	for (int j = 0; j < N; j++) {
		sum += student[j];
	}
	printf("총점 : %d\n\n", sum);

	for (int k = 0; k < N; k++) {
		printf("학생 # %d-%d 성적 출력 : %d\n", N, k, student[k]);
	}
	printf("평균 점수 : %.2f", (sum / N));

	return 0;
}