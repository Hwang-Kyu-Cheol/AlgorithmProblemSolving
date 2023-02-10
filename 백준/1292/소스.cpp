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
	//초기화
	memset(prefixSum, 0, sizeof(prefixSum));
	A = 0, B = 0;
	answer = 0;

	//입력
	cin >> A >> B;

	//해법
	answer = solution();

	//출력
	cout << answer << "\n";

	//종료
	return 0;
}