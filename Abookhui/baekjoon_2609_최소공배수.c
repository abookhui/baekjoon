#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int random(int min, int max);

int main() {
	int min, max; int n;
	printf("�ּڰ��� �Է��Ͻÿ�\n"); scanf("%d", &min);
	printf("�ִ��� �Է��Ͻÿ�\n"); scanf("%d", &max);

	n = random(min, max);
	printf("%d", n);

}
int random(int min, int max) {
	srand((unsigned)time(NULL));
	return (rand() % (max - min) + min);

}
