#include <iostream>
#include <algorithm>
#include <limits.h>

using namespace std;

int N, n;
int Min, Max;

int main() {
	//초기화
	N = 0, n = 0;
	Min = INT_MAX, Max = INT_MIN;

	//입력
	cin >> N;

	//해법
	while (N--) {
		cin >> n;
		Min = min(Min, n);
		Max = max(Max, n);
	}

	//출력
	cout << Min << " " << Max << "\n";

	//종료
	return 0;
}