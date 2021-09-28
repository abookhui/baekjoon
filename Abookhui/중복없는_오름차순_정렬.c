// ���� ���밪�� ������

#include<stdio.h>
#include<stdlib.h>

#define size 10000

int cnt[size] = { 0, };

int main() {

	int n, num;

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &num);

		cnt[num] = 1;
	}
	for (int i = 0; i <= size; i++) {
		if (cnt[i] == 0) {
			continue;
		}

		printf("%d\n", i);

	}
}


//�ߺ� ���� �Լ�

void overlaption_remove(int* arr, int* len) {

	int* tmp = (int*)malloc(sizeof(int) * (*len));
	int cnt = 0;

	for (int i = 0; i < (*len); i++) {
		if (check(tmp, cnt, arr[i]) == 0) {
			tmp[cnt] = arr[i];
			cnt++;
		}
	}

	for (int k = 0; k < cnt; k++) { // arr�� tmp�ֱ�
		arr[k] = tmp[k];
	}
	*len = cnt; //���� �ٲ��ֱ�

	free(tmp);
}

int check(int* arr, int arr_size, int val) {
	for (int i = 0; i < arr_size; i++) {
		if (arr[i] == val)
			return 1;
	}
	return 0;
}

// ���� Ž��

#include <stdio.h>


int main(void) {

	int findN;
	int result = 0;
	//ó��int�� ���� ���� ������ int ����ġ

	int A[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 15 };

	scanf("%d", &findN);
	int left = 0, right = 9;


	while (left <= right) {

		int mid = (left + right) / 2;
		if (A[mid] > findN)
			right = mid - 1;
		else if (A[mid] < findN)
			left = mid + 1;
		else
		{
			result = mid;
			break;
		}

	}

	printf("%d\n", result);

	return 0;
}
