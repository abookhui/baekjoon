/* �� ������ �̿��� ��
*
	�ϴ� ���� = ������������ =

	�̺�Ž���ϴµ� ������  l<r = �� ���� ������ �ȵǴ�

	���� �μ��� ���� ���� �迭�� � ���� ������ l�� r�� ��
	�ε����� ������ Ȯ��

	�׷��� ������ cnt ������ l++ r--;


*/

#include<iostream>
#include<algorithm>

using namespace std;

int arr[2001];

int main() {

	int n, cnt = 0;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	sort(arr, arr + n);

	for (int i = 0; i < n; i++) {
		int val = arr[i];  // ã�� ��

		int l = 0, r = n - 1, sum = 0;

		while (l < r) {
			sum = arr[l] + arr[r];

			if (sum == val) {
				if ((l != i) && (r != i)) {
					cnt++;
					break;
				}

				else if (l == i)
					l++;
				else if (r == i)
					r--;
			}

			else if (sum < val)
				l++;

			else
				r--;

		}
	}

	cout << cnt << '\n';

}