#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	//�ʱ�ȭ
	int sum = 0;
	int answer = 0;

	//�Է� �� �ع�
	for (int i = 0; i < 10; i++) {
		int out, in;
		cin >> out >> in;
		sum += (in - out);
		answer = max(answer, sum);
	}

	//���
	cout << answer << "\n";

	//����
	return 0;
}