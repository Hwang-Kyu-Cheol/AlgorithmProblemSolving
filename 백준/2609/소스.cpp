#include <iostream>
#include <algorithm>

using namespace std;

int gcd(int n1, int n2) {
	int big = max(n1, n2);
	int small = min(n1, n2);
	while (big % small != 0) {
		int tmp = big;
		big = small;
		small = tmp % small;
	}
	return small;
}

int lcm(int n1, int n2) {
	return (n1 * n2) / gcd(n1, n2);
}

int main() {
	//선언
	int n1, n2;

	//입력
	cin >> n1 >> n2;

	//출력
	cout << gcd(n1, n2) << "\n" << lcm(n1, n2);

	//종료
	return 0;
}