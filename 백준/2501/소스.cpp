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
	//초기화
	N = 0, K = 0;
	answer = 0;

	//입력
	cin >> N >> K;

	//해법
	answer = solution();

	//출력
	cout << answer << "\n";

	//종료
	return 0;
}