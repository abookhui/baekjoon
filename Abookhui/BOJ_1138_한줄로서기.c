/* �ڱ� ���� ū ����� �տ� X ���� �ڸ��� 0 �̐�
 �� �ڸ��� ����� �ִ´�

 �迭�� 0�� �ڸ��� �ڽź��� ū ����� ������

 �׷��� �ڱ� ���� ū ��� ���� �ٿ� �ٽ� �ݺ�

 �Է��� left���� Ű ū ����� ���� ���� �ڽź��� ū ����� ���� �� �ڸ��� ���� ��� ���ڸ���
 ���� ����
*/

#include<stdio.h>

int main() {

	int n;
	int arr[11] = { 0, };  // ����� �� ��

	scanf("%d", &n);

	int left;
	for (int i = 1; i <= n; i++) {

		scanf("%d", &left);

		for (int j = 1; j <= n; j++) {
			if (left == 0 && arr[j] == 0) {
				arr[j] = i;
				break;
			}
			else if (arr[j] == 0) {
				left--;
			}
		}
	}

	for (int i = 1; i <= n; i++) {
		printf("%d ", arr[i]);
	}
}