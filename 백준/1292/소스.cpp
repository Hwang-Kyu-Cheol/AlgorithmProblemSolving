#include <iostream>
#include <memory.h>

using namespace std;

int prefixSum[1001];
int A, B;
int answer;

int solution() {
	int ret = 0;

	int num = 1, cnt = 1;
	for (int i = 1; i <= B; i++) {
		if (cnt == 0) {
			num++;
			cnt = num;
		}
		prefixSum[i] = prefixSum[i - 1] + num;
		cnt--;
	}
	ret = prefixSum[B] - prefixSum[A - 1];

	return ret;
}

int main() {
	//�ʱ�ȭ
	memset(prefixSum, 0, sizeof(prefixSum));
	A = 0, B = 0;
	answer = 0;

	//�Է�
	cin >> A >> B;

	//�ع�
	answer = solution();

	//���
	cout << answer << "\n";

	//����
	return 0;
}