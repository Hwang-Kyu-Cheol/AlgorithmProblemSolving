#include <iostream>
#include <string>
#include <memory.h>

using namespace std;

int N, K;
int words[50];
int answer;

int findMatchingWords(int learned) {
	int ret = 0;
	for (int i = 0; i < N; i++) {
		if ((words[i] & learned) == words[i]) ret++;
	}
	return ret;
}

int dfs(int idx, int cnt, int learned) {
	if (cnt == K - 5) return findMatchingWords(learned);

	int ret = 0;
	for (int i = idx; i < 26; i++) {
		if (!(learned & (1 << i))) {		
			ret = max(ret, dfs(i + 1, cnt + 1, learned | (1 << i)));
		}
	}
	return ret;
}

int solution() {
	int ret = 0;
	if (K >= 5) {
		int learned = 0;
		for (const auto& c : "antic") {
			learned |= (1 << (c - 'a'));
		}
		ret = dfs(0, 0, learned);
	}
	return ret;
}

int main() {
	//초기화
	N = 0, K = 0;
	memset(words, 0, sizeof(words));
	answer = 0;

	//입력
	cin >> N >> K;
	for (int i = 0; i < N; i++) {
		string s;
		cin >> s;
		for (const auto &c : s) {
			words[i] |= (1 << (c - 'a'));
		}
	}

	//해법
	answer = solution();

	//출력
	cout << answer << "\n";

	//종료
	return 0;
}
