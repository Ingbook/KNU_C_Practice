#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int N;
	float sum = 0;
	scanf_s("%d", &N);

	int* student = (int*)malloc(N * sizeof(int));
	for (int i = 0; i < N; i++) {
		printf("�л� # %d-%d ���� �Է� : ", N, i);
		scanf_s("%d", &student[i]);
	}

	for (int j = 0; j < N; j++) {
		sum += student[j];
	}
	printf("���� : %d\n\n", sum);

	for (int k = 0; k < N; k++) {
		printf("�л� # %d-%d ���� ��� : %d\n", N, k, student[k]);
	}
	printf("��� ���� : %.2f", (sum / N));

	return 0;
}