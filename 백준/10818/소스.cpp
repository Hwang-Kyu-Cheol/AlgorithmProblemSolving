#include <iostream>
#include <algorithm>
#include <limits.h>

using namespace std;

int N, n;
int Min, Max;

int main() {
	//�ʱ�ȭ
	N = 0, n = 0;
	Min = INT_MAX, Max = INT_MIN;

	//�Է�
	cin >> N;

	//�ع�
	while (N--) {
		cin >> n;
		Min = min(Min, n);
		Max = max(Max, n);
	}

	//���
	cout << Min << " " << Max << "\n";

	//����
	return 0;
}