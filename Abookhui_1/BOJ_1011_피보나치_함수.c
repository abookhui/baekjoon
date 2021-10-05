/*  ��ȣ
	��/�� ��ȣ�� ������ ���ƾ��ϰ� ������ �����ʺ��� ���� 
	���;� ��

	������ �̿�����
	���� ����� �Ÿ��� �ִ� ��ȣ�� ���� ���� ¦�� �¾ƾ���
	( �� ������ push )�� ������ pop �� �˻�

	������ �׻� �ֱٿ� �����Ѱ��� ���� �ʿ��� ��쿡 ������
*/

#include<stdio.h>
#include<string.h>

char stack[50];
int top = 0;

int check_func(char* p);

void push(char p);
char pop();
int empty();

int main() {

	int test; scanf("%d", &test);

	char p[50];
	for (int i = 0; i < test; i++) {
		scanf("%s", p);

		if (check_func(p)) {
			printf("Y\n");
		}
		else {
			printf("N\n");
		}
	 }
	
}

int check_func(char* p) {
	int result = 1;
	int len = strlen(p);

	for (int i = 0; i < len; i++) {
		
		if (p[i] == '(') {
			push(p[i]);
		}
		else {
			if (empty()) {
				result = 0;
				break;
			}
			else {
				pop();
			}
		}
	}
	if (!empty()) {
		result = 0;
	}
	while (!empty()) {
		pop();
	}
	return result;
}

void push(char p) {
	stack[top++] = p;
}
char pop() {
	return stack[--top];
}
int empty() {
	top = 0;
	return top;
}