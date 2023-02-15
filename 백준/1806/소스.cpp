#include <iostream>
#include <memory.h>
#include <algorithm>
#define INF 987654321

using namespace std;

int N, S;
int arr[100001];
int answer;

int solution() {
	int ret = INF;
	int start = 0, end = 0;
	int sum = 0;
	while (end <= N) {
		if (sum < S) sum += arr[end++];
		else {
			ret = min(ret, end - start);
			sum -= arr[start++];
		}
	}
	ret = (ret == INF) ? 0 : ret;
	return ret;
}

int main() {
	//초기화
	N = 0, S = 0;
	memset(arr, 0, sizeof(arr));
	answer = 0;

	//입력
	cin >> N >> S;
	for (int i = 0; i < N; i++) cin >> arr[i];

	//해법
	answer = solution();

	//출력
	cout << answer << "\n";

	//종료
	return 0;
}