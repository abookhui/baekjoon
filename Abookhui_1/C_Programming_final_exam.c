#include<stdio.h>

int inputCount();
char check(int All_score);

int score[100][4];
int All_score[100];
int member[100];
char grade[100];

int main() {
	int student = inputCount();


	for (int i = 0; i < student; i++) {  // �߰� �⸻ �⼮ ���� ���� �Է�
		printf("�����Է�(0~100��)\n"); printf("�߰�, �⸻, ����, �⼮ ��:");
		scanf("%d %d %d %d", &score[i][0], &score[i][1], &score[i][2], &score[i][3]);

		score[i][0] = score[i][0] * 3 / 10;       // �������� �ٷ� �ٲٱ�
		score[i][1] = score[i][1] * 3 / 10;
		score[i][2] = score[i][2] * 2 / 10;
		score[i][3] = score[i][3] * 2 / 10;

		All_score[i] = score[i][0] + score[i][1] + score[i][2] + score[i][3];  //����
		member[i] = i;
	}
	printf("*************************************************\n");
	int temp, least;
	for (int i = 0; i < student - 1; i++) {
		least = i;
		for (int j = i + 1; j < student; j++) {
			if (All_score[j] < All_score[least]) {
				least = j;
			}
			temp = All_score[i];
			All_score[i] = All_score[least];
			All_score[least] = temp;

			temp = member[i];
			member[i] = member[least];
			member[least] = temp;
		}
	}
	printf("��ȣ\t����\t����\n");
	for (int i = student - 1; i >= 0; i--) {
		printf("%2d��\t %2d\t %2c\t\n", member[i] + 1, All_score[i], check(All_score[i]));
	}

}

int inputCount() {
	int student;
	do {
		printf("����ó�� �л���(100�� ����) :");
		scanf("%d", &student);
		if (student > 100 || student < 0) {
			printf("�Է¿����Դϴ�. �ٽ� �Է��ϼ���!\n");
		}

	} while (student > 100 || student < 0);

	return student;
}
char check(int All_score) {
	if (All_score >= 90) {
		return 'A';
	}
	else if (All_score >= 80) {
		return 'B';
	}
	else if (All_score >= 70) {
		return 'C';
	}
	else if (All_score >= 60) {
		return 'D';
	}
	else if (All_score < 60) {
		return 'F';
	}
}