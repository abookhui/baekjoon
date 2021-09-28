/* 2468 ���� ����

	max=1; if(max<cnt) max=cnt;

	�Է��Ҷ� ���� ����ū������ �ݺ���Ű�� cnt���� ū�� max_high�� ����

	max_high ��ŭ �ݺ��� ���� ���� ū ����  max ���� �� ���

	��
*/

#include<stdio.h>
#include<string.h>

int map[101][101];
int visited[101][101];
int n;

int dx[4] = { 1,-1,0,0 };
int dy[4] = { 0,0,1,-1 };
void dfs(int flood, int x, int y) {
	visited[x][y] = 1;

	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];

		if (nx >= 0 && ny >= 0 && nx < n && ny<n && map[nx][ny]>flood && !visited[nx][ny]) {
			dfs(flood, nx, ny);
		}
	}
}

int cmp(const void* a, const void* b) {
	int n1 = *(int*)a;
	int n2 = *(int*)b;

	return n1 - n2;
}

int main() {

	scanf("%d", &n);

	int max_high = 1;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			scanf("%d", &map[i][j]);

			if (max_high < map[i][j])
				max_high = map[i][j];

		}
	}

	int max = 1;
	for (int t = 1; t < max_high; t++) {
		memset(visited, 0, sizeof(visited));
		int cnt = 0;

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (map[i][j] > t && !visited[i][j]) {
					dfs(t, i, j);
					cnt++;
				}
			}
		}
		if (max < cnt) {
			max = cnt;
		}
	}

	printf("%d\n", max);

}