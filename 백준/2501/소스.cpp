#include <iostream>

using namespace std;

int N, K;
int answer;

int solution() {
	int ret = 0;
	for (int i = 1; i <= N; i++) {
		if (N % i == 0) {
			K--;
			if (K == 0) {
				ret = i;
				break;
			}
		}
	}
	return ret;
}

int main() {
	//�ʱ�ȭ
	N = 0, K = 0;
	answer = 0;

	//�Է�
	cin >> N >> K;

	//�ع�
	answer = solution();

	//���
	cout << answer << "\n";

	//����
	return 0;
}