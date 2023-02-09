#include <iostream>

using namespace std;

int n;
int answer;

int solution() {
	int ret = 0;
	
	int cur = 0, nxt = 1;
	for (int i = 0; i <= n; i++) {
		if (i == 0) ret = cur;
		else if (i == 1) ret = nxt;
		else {
			ret = cur + nxt;
			cur = nxt;
			nxt = ret;
		}
	}

	return ret;
}

int main() {
	//�ʱ�ȭ
	n = 0;
	answer = 0;

	//�Է�
	cin >> n;

	//�ع�
	answer = solution();

	//���
	cout << answer << "\n";

	//����
	return 0;
}