#include <iostream>
#include <memory.h>
#include <cmath>

using namespace std;

int prime[10001];
int M, N;
int sum, minPrime;

void eratosthenes() {
	prime[1] = false;
	for (int i = 2; i <= sqrt(N); i++) {
		if (prime[i]) {
			for (int j = i * i; j <= N; j += i) prime[j] = false;
		}
	}
}

void solution() {
	eratosthenes();
	for (int i = M; i <= N; i++) {
		if (prime[i]) {
			if (minPrime == 0) minPrime = i;
			sum += i;
		}
	}
}

int main() {
	//초기화
	memset(prime, true, sizeof(prime));
	M = 0, N = 0;
	sum = 0, minPrime = 0;

	//입력
	cin >> M >> N;

	//해법
	solution();

	//출력
	if (sum == 0) cout << -1;
	else cout << sum << "\n" << minPrime;

	//종료
	return 0;
}