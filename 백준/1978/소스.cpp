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
	//초기화
	memset(prime, true, sizeof(prime));
	N = 0;
	answer = 0;

	//입력 및 해법
	eratosthenes();
	cin >> N;
	while (N--) {
		int n;
		cin >> n;
		if (prime[n]) answer++;
	}

	//출력
	cout << answer << "\n";

	//종료
	return 0;
}