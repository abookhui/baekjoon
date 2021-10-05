#include<iostream>
#include<string.h>

using namespace std;

int map[50][50];
int w, h; // �ʺ� ����  == ���� ����

void dfs(int x, int y) { // ���� ����

	map[x][y] = 0;  //�湮 ����

	if (map[x - 1][y - 1] == 1 && x - 1 >= 0 && y - 1 >= 0)  //�ϼ�
		dfs(x - 1, y - 1);

	if (map[x - 1][y + 1] == 1 && x - 1 >= 0 && y + 1 < w)   //�ϵ�
		dfs(x - 1, y + 1);

	if (map[x + 1][y - 1] == 1 && x + 1 < h && y - 1 >= 0)  // ����
		dfs(x + 1, y - 1);

	if (map[x + 1][y + 1] == 1 && x + 1 < h && y + 1 < w)   //����
		dfs(x + 1, y + 1);

	if (map[x][y + 1] == 1 && y + 1 < w)   // ��
		dfs(x, y + 1);

	if (map[x][y - 1] == 1 && y - 1 >= 0)   // ��
		dfs(x, y - 1);

	if (map[x - 1][y] == 1 && x - 1 >= 0)  // ��
		dfs(x - 1, y);

	if (map[x + 1][y] == 1 && x + 1 < h)  // ��
		dfs(x + 1, y);

}
int main() {


	while (1) {
		cin >> w >> h;

		if (w == 0 && h == 0)
			break;

		memset(map, 0, sizeof(map));

		for (int i = 0; i < h; i++) {  // ����
			for (int j = 0; j < w; j++) {  //����
				cin >> map[i][j];
			}
		}

		int cnt = 0;
		for (int i = 0; i < h; i++) {  // ����
			for (int j = 0; j < w; j++) {  //����
				if (map[i][j] == 1) {
					dfs(i, j);
					cnt++;
				}
			}
		}
		cout << cnt << '\n';

	}

}