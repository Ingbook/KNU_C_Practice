#include <stdio.h>

void swap(int* a, int* b);
void sort(int arr[], int N);

int main(void)
{
	int N;
	scanf_s("%d", &N);
	int* arr = (int*)malloc(N * sizeof(int));
	
	for (int i = 0; i < N; i++) {
		scanf_s("%d", &arr[i]);
	}
	
	sort(arr, N);

	free(arr);

	return 0;
}

void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void sort(int arr[], int N)
{
	for (int i = 0; i < N - 1; i++) {
		int min = i;
		for (int j = i + 1; j < N; j++) {
			if (arr[j] < arr[min]) {
				min = j;
			}
		}
		if (min != i) {
			swap(&arr[i], &arr[min]);
		}
	}

	for (int i = 0; i < N; i++) {
		printf("%d ", arr[i]);
	}
}