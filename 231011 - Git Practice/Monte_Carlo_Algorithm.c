#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(void)
{
    double x = 0;
    double y = 0;

    int count = 0, circle = 0;

    int percentage = 0, progress = 0;

    srand(time(NULL));

    while (count < 1000000000) // 10억 회 반복
    {
        x = (double)rand() / (double)RAND_MAX * 2 - 1;
        y = (double)rand() / (double)RAND_MAX * 2 - 1;

        // 원 안에 들어간 점인지 확인
        if (sqrt(pow(x, 2) + pow(y, 2)) < 1.0)
            circle++;

        count++;

        // 1000만 회마다 원주율과 진행 상황 출력
        if (count % 10000000 == 0) {
            progress++;
            percentage++;
            double pi_approx = 4.0 * circle / count;    // pi = 4 * (# of circle) / (# of count)
            printf("%d%% 진행.. 원주율 : %f ", percentage, pi_approx);
            for (int i = 0; i < progress; i++)
                printf("■");

            for (int j = 0; j < (100 - progress); j++)
                printf("□");

            printf("\n");
        }
    }

    double pi = 4.0 * circle / count;
    printf("원주율 : %f\n", pi);

    return 0;
}
