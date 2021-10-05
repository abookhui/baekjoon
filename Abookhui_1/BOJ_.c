#include <stdio.h>

int arr1[10];
int arr2[10];

int main() {
	int n, m;
	scanf("%d %d", &n, &m);

	for (int i = 0; i < n; i++) {
		scanf("%d", &arr1[i]);
	}
	for (int i = 0; i < m; i++) {
		scanf("%d", &arr2[i]);
	}

	int a = n, b = m;
	for (int i = 0; i < 20; i++) {
		if (n-- >= 0) {
			if (i < a) {
				printf("%d\n", arr1[i]);
			}
		}
		if (m-- >= 0) {
			if (i < b) {
				printf("%d\n", arr2[i]);
			}
		}
	}
	return 0;
}
