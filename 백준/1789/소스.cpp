#include <iostream>

using namespace std;

long long N, S;
long long answer;

long long solution() {
	long long ret = 1;
	while (true) {
		S -= ret;
		if (S < 0) break;
		ret++;
	}
	return --ret;
}

int main() {
	//�ʱ�ȭ
	N = 0, S = 0;
	answer = 0;

	//�Է�
	cin >> S;

	//�ع�
	answer = solution();

	//���
	cout << answer << "\n";

	//����
	return 0;
}