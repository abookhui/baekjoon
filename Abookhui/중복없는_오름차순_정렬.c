// 수의 절대값이 적을때

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


//중복 제거 함수

void overlaption_remove(int* arr, int* len) {

	int* tmp = (int*)malloc(sizeof(int) * (*len));
	int cnt = 0;

	for (int i = 0; i < (*len); i++) {
		if (check(tmp, cnt, arr[i]) == 0) {
			tmp[cnt] = arr[i];
			cnt++;
		}
	}

	for (int k = 0; k < cnt; k++) { // arr에 tmp넣기
		arr[k] = tmp[k];
	}
	*len = cnt; //길이 바꿔주기

	free(tmp);
}

int check(int* arr, int arr_size, int val) {
	for (int i = 0; i < arr_size; i++) {
		if (arr[i] == val)
			return 1;
	}
	return 0;
}

// 이진 탐색

#include <stdio.h>


int main(void) {

	int findN;
	int result = 0;
	//처음int는 다음 정점 마지막 int 값어치

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
