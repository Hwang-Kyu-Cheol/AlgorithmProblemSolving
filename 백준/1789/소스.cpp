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
	//초기화
	N = 0, S = 0;
	answer = 0;

	//입력
	cin >> S;

	//해법
	answer = solution();

	//출력
	cout << answer << "\n";

	//종료
	return 0;
}