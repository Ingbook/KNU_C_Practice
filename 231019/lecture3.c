#include <stdio.h>
#include <stdlib.h>

struct Student {
	int sno;
	char name[10];
	int score;
};


int main(void)
{
	int N;
	float sum = 0;

	printf("�л��� �Է� : ");
	scanf_s("%d", &N);

	struct Student* s = (struct Student*)malloc(N * sizeof(int));
	for (int i = 0; i < N; i++) {
		printf("�л� # %d-%d �й� �Է� : ", N, i);
		scanf_s("%d", &(s[i].sno));

		printf("�л� # %d-%d �̸� �Է� : ", N, i);
		scanf_s(" %c", &(s[i].name), 10);

		printf("�л� # %d-%d ���� �Է� : ", N, i);
		scanf_s("  %d", &(s[i].score));

		printf("\n");
	}

	for (int j = 0; j < N; j++) {
		sum += s[j].score;
	}
	printf("���� : %d\n\n", sum);

	free(s);
	return 0;
}