#include <iostream>
#include <vector>
#include <memory.h>
#include <stack>

using namespace std;

int N, M;
vector<int> edge[32001];
int indegree[32001];

void solution() {
	stack<int> s;

	for (int i = 1; i <= N; i++) {
		if (!indegree[i]) s.push(i);
	}

	while (!s.empty()) {
		int cur = s.top();
		s.pop();

		cout << cur << " ";

		for (const auto& nxt : edge[cur]) {
			indegree[nxt]--;
			if (!indegree[nxt]) s.push(nxt);
		}
	}
}

int main() {
	//�ʱ�ȭ
	N = 0, M = 0;
	for (int i = 0; i < 32001; i++) edge[i].clear();
	memset(indegree, 0, sizeof(indegree));

	//�Է�
	cin >> N >> M;
	for (int i = 0; i < M; i++) {
		int A, B;
		cin >> A >> B;
		edge[A].push_back(B);
		indegree[B]++;
	}

	//�ع� �� ���
	solution();

	//����
	return 0;
}