#include<stdio.h>
#include<stdlib.h>

typedef struct {    // x��ǥ��	y��ǥ�� ���� �����ϴ� Pair ����ü �����
	int x;
	int y;
}Pair;

int compare(const void* a, const void* b);   // ���Լ� ����

int main() {
	int n;
	scanf("%d", &n);

	Pair* arr = (Pair*)malloc(sizeof(Pair) * n); // �����Ҵ�


	for (int i = 0; i < n; i++) {
		scanf("%d %d", &arr[i].x, &arr[i].y);   // ��ǥ ����
	}


	qsort(arr, n, sizeof(Pair), compare);    // ����


	for (int i = 0; i < n; i++) {
		printf("%d %d\n", arr[i].x, arr[i].y);
	}

	free(arr);
}
int compare(const void* a, const void* b)
{
	Pair* A = (Pair*)a;
	Pair* B = (Pair*)b;

	if (A->x < B->x)
		return -1;
	else if (A->x > B->x)
		return 1;
	else
	{
		if (A->y < B->y)
			return -1;
		else
			return 1;
	}
	return 0;
}
