#include <iostream>
#include <memory.h>
#include <algorithm>

using namespace std;

int N;
char map[51][51];
int answer;

void swap(int x1, int y1, int x2, int y2) {
	char tmp = map[x1][y1];
	map[x1][y1] = map[x2][y2];
	map[x2][y2] = tmp;
}

int simulation() {
	int ret = 0;

	//�� ������ �˻�
	for (int i = 0; i < N; i++) {
		char prev = map[i][0];
		int cnt = 1;
		for (int j = 1; j <= N; j++) {
			if (prev == map[i][j]) cnt++;
			else {
				ret = max(ret, cnt);
				prev = map[i][j];
				cnt = 1;
			}
		}
	}
	
	//�� ������ �˻�
	for (int j = 0; j < N; j++) {
		char prev = map[0][j];
		int cnt = 1;
		for (int i = 1; i <= N; i++) {
			if (prev == map[i][j]) cnt++;
			else {
				ret = max(ret, cnt);
				prev = map[i][j];
				cnt = 1;
			}
		}
	}

	return ret;
}

int solution() {
	int ret = 0;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			//������ ��ȯ
			if (j + 1 < N && map[i][j] != map[i][j + 1]) {
				swap(i, j, i, j + 1);
				ret = max(ret, simulation());
				swap(i, j, i, j + 1);
			}

			//�Ʒ��� ��ȯ
			if (i + 1 < N && map[i][j] != map[i + 1][j]) {
				swap(i, j, i + 1, j);
				ret = max(ret, simulation());
				swap(i, j, i + 1, j);
			}
		}
	}

	return ret;
}

int main() {
	//�ʱ�ȭ
	N = 0;
	memset(map, 0, sizeof(map));
	answer = 0;

	//�Է�
	cin >> N;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> map[i][j];
		}
	}

	//�ع�
	answer = solution();

	//���
	cout << answer << "\n";

	//����
	return 0;
}