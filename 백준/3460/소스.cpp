#include <iostream>

using namespace std;

int T, n;

int main() {
	//�ʱ�ȭ
	T = 0, n = 0;

	//�Է�
	cin >> T;

	//�ع� �� ���
	while (T--) {
		cin >> n;

		int pos = 0;
		while (n > 0) {
			if (n % 2 == 1) cout << pos << " ";
			n /= 2;
			pos++;
		}
		cout << "\n";
	}

	//����
	return 0;
}