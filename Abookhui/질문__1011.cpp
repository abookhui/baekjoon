/*
	횟수가 1 2 3 3 4 4 5 5 5 6 6 6 7 7 7 7 .... 이렇게 규칙적으로 나타남

	아... 질문이 뭐였더라..
*/

#include<iostream>

using namespace std;

void fly(int x, int y) {
	int d = y - x;
	int num = 0, ans = 0;

	while (1) {
		if (d <= num * (num + 1))
			break;
		num += 1;
		if (d <= num * num) {
			ans = num * 2 - 1;
		}

		else if (d > num * num) {
			ans = num * 2;

		}
	}
	cout << ans << '\n';
}

int main() {

	int n;
	int x, y;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> x >> y;

		fly(x, y);
	}
}