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

	printf("학생수 입력 : ");
	scanf_s("%d", &N);

	struct Student* s = (struct Student*)malloc(N * sizeof(int));
	for (int i = 0; i < N; i++) {
		printf("학생 # %d-%d 학번 입력 : ", N, i);
		scanf_s("%d", &(s[i].sno));

		printf("학생 # %d-%d 이름 입력 : ", N, i);
		scanf_s(" %c", &(s[i].name), 10);

		printf("학생 # %d-%d 성적 입력 : ", N, i);
		scanf_s("  %d", &(s[i].score));

		printf("\n");
	}

	for (int j = 0; j < N; j++) {
		sum += s[j].score;
	}
	printf("총점 : %d\n\n", sum);

	free(s);
	return 0;
}