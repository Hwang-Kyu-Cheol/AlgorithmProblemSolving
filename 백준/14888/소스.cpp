#include <iostream>
#include <memory.h>
#include <limits.h>
#include <algorithm>

using namespace std;

int N;
int num[11], oper[4];
int Max, Min;

int calc(int n1, int n2, int op) {
	switch (op) {
	case 0: return n1 + n2;
	case 1: return n1 - n2;
	case 2: return n1 * n2;
	case 3: return n1 / n2;
	}
}

void dfs(int cnt, int result) {
	if (cnt == N - 1) {
		Max = max(Max, result);
		Min = min(Min, result);
		return;
	}

	for (int i = 0; i < 4; i++) {
		if (oper[i]) {
			oper[i]--;
			dfs(cnt + 1, calc(result, num[cnt + 1], i));
			oper[i]++;
		}
	}
}

void solution() {
	dfs(0, num[0]);
}

int main() {
	//�ʱ�ȭ
	N = 0;
	memset(num, 0, sizeof(num));
	memset(oper, 0, sizeof(oper));
	Max = INT_MIN, Min = INT_MAX;

	//�Է�
	cin >> N;
	for (int i = 0; i < N; i++) cin >> num[i];
	for (int i = 0; i < 4; i++) cin >> oper[i];

	//�ع�
	solution();

	//���
	cout << Max << "\n" << Min;

	//����
	return 0;
}