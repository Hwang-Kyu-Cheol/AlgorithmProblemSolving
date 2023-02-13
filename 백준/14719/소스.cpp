#include <iostream>
#include <memory.h>
#include <algorithm>

using namespace std;

int H, W;
int map[502];
int answer;

int findMaxHeight(int start, int end) {
	int ret = 0;
	for (int i = start; i <= end; i++) {
		ret = max(ret, map[i]);
	}
	return ret;
}

int solution() {
	int ret = 0;
	for (int i = 1; i <= W; i++) {
		int leftMaxHeight = findMaxHeight(0, i - 1);
		int rightMaxHeight = findMaxHeight(i + 1, W + 1);
		ret += max(0, min(leftMaxHeight, rightMaxHeight) - map[i]);
	}
	return ret;
}

int main() {
	//�ʱ�ȭ
	H = 0, W = 0;
	memset(map, 0, sizeof(map));
	answer = 0;

	//�Է�
	cin >> H >> W;
	for (int i = 1; i <= W; i++) cin >> map[i];

	//�ع�
	answer = solution();

	//���
	cout << answer << "\n";

	//����
	return 0;
}