/* ���� �� ��

<01> ������ ����
	1. ������ Ȧ�� �� ���
	������ ū �� ������ ���ϰ� �������� ���� ���Ѵ�.( ���� 0�� �����Ѵٸ� 0�� �����ش�.)
	2. ���� ¦�� �� ���
	������ ū¦���� �����ش�.

<02> 1�� ����
	1.n�� Ȧ���̸� 1�� ������ ���鳢�� ¦�� �̷�� 1�� ���Ѵ�.
	2.n�� ¦���̸� ������ ū ������ ¦�� �̷�� 1�� ������ �ϳ��� �׳� �����ش�.

<03> 0�� ����
	<01>������ ���� ������ �����Ҷ� ���� ���� ������ �������� ������ 0�� ���� ���
*/

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {

	int n;
	cin >> n;

	vector<int>arr_p;
	vector<int>arr_m;
	vector<int>ans;
	int zero = 0;

	int num; int sum;
	for (int i = 0; i < n; i++) {
		cin >> num;

		if (num < 0) {
			arr_m.push_back(num);
		}
		if (num > 0) {
			if (num == 1)
				ans.push_back(num);
			else {
				arr_p.push_back(num);
			}
		}
		if (num == 0) {
			zero++;
		}
	}

	sort(arr_p.begin(), arr_p.end());
	sort(arr_m.begin(), arr_m.end(), greater<int>());

	if (arr_p.size() % 2 != 0) {
		ans.push_back(arr_p[0]);
	}

	for (int i = arr_p.size() - 1; i > 0; i -= 2) {  //���
		sum = arr_p[i] * arr_p[i - 1];
		ans.push_back(sum);
	}



	if (arr_m.size() % 2 != 0) {   // ����
		if (zero > 0) {
			ans.push_back(arr_m[0] * 0);
		}
		else {
			ans.push_back(arr_m[0]);
		}
	}

	for (int i = arr_m.size() - 1; i > 0; i -= 2) {
		sum = arr_m[i] * arr_m[i - 1];
		ans.push_back(sum);
	}
	int result = 0;
	for (int i = 0; i < ans.size(); i++) {
		result += ans[i];

	}
	cout << result;
}