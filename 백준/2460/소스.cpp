#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	//초기화
	int sum = 0;
	int answer = 0;

	//입력 및 해법
	for (int i = 0; i < 10; i++) {
		int out, in;
		cin >> out >> in;
		sum += (in - out);
		answer = max(answer, sum);
	}

	//출력
	cout << answer << "\n";

	//종료
	return 0;
}