#include <iostream>
#include <memory.h>
#include <algorithm>

using namespace std;

int boy[9];
int answer[7];

bool dfs(int idx, int cnt, int sum) {
	if (idx > 9) return false;
	if (sum > 100) return false;
	if (cnt == 7) {
		if (sum == 100) return true;
		return false;
	}

	for (int i = idx; i < 9; i++) {
		answer[cnt] = boy[i];
		if (dfs(i + 1, cnt + 1, sum + boy[i])) return true;
	}
	return false;
}

void solution() {
	dfs(0, 0, 0);
	sort(answer, answer + 7);
}

int main() {
	//�ʱ�ȭ
	memset(boy, 0, sizeof(boy));
	memset(answer, 0, sizeof(answer));

	//�Է�
	for (int i = 0; i < 9; i++) cin >> boy[i];

	//�ع�
	solution();

	//���
	for (int i = 0; i < 7; i++) cout << answer[i] << "\n";
	
	//����
	return 0;
}