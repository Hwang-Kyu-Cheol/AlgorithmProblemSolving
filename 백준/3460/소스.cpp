#include <iostream>

using namespace std;

int T, n;

int main() {
	//초기화
	T = 0, n = 0;

	//입력
	cin >> T;

	//해법 및 출력
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

	//종료
	return 0;
}