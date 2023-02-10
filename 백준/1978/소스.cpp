#include <iostream>
#include <memory.h>
#include <cmath>

using namespace std;

bool prime[1001];
int N;
int answer;

void eratosthenes() {
	prime[1] = false;
	for (int i = 2; i <= sqrt(1000); i++) {
		if (prime[i]) {
			for (int j = i * i; j <= 1000; j += i) {
				prime[j] = false;
			}
		}
	}
}

int main() {
	//�ʱ�ȭ
	memset(prime, true, sizeof(prime));
	N = 0;
	answer = 0;

	//�Է� �� �ع�
	eratosthenes();
	cin >> N;
	while (N--) {
		int n;
		cin >> n;
		if (prime[n]) answer++;
	}

	//���
	cout << answer << "\n";

	//����
	return 0;
}