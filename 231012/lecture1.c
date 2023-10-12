#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
int main(void)
{
	double x = 0.;
	double y = 0.;

	int cnt_in_circle = 0;

	srand(time(NULL));

	for (int i = 1; i <= 1000000000; i++) {
		x = (double)rand() / (double)RAND_MAX;
		y = (double)rand() / (double)RAND_MAX;
		if (sqrt(x * x + y * y) < 1.0) {
			cnt_in_circle++;
		}
		double pi = 4.0 * (double)cnt_in_circle / (double)i;

		if (i % 10000000 == 0) {
			int percentage = i / 10000000;
			printf("%d%% 진행 ... 원주율 : %lf ", percentage, pi);
			for (int j = 0; j < (percentage / 5); j++) {
				printf("■");
			}
			for (int j = 0; j < (20 - percentage / 5); j++) {
				printf("□");
			}
			printf("\n");
		}
	}

	return 0;
}