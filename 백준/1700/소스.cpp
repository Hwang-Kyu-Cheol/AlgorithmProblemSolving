#include <iostream>
#include <set>
#include <memory.h>
#define INF 987654321

using namespace std;

int N, K;
int order[100];
set<int> multitap;
int answer;

int findFarObj(int start) {
	int ret = 0;
	int farDist = 0;
	for (const auto &obj : multitap) {
		int dist = INF;
		for (int i = start; i < K; i++) {
			if (order[i] == obj) {
				dist = i - start;
				break;
			}
		}
		if (dist > farDist) {
			farDist = dist;
			ret = obj;
		}
	}
	return ret;
}

int solution() {
	int ret = 0;
	for (int i = 0; i < K; i++) {
		if (multitap.size() < N) multitap.insert(order[i]);
		else {
			if (multitap.find(order[i]) != multitap.end()) continue;
			int remove = findFarObj(i);
			multitap.erase(remove);
			multitap.insert(order[i]);
			ret++;
		}
	}
	return ret;
}

int main() {
	//초기화
	N = 0, K = 0;
	memset(order, 0, sizeof(order));
	multitap.clear();
	answer = 0;

	//입력
	cin >> N >> K;
	for (int i = 0; i < K; i++) cin >> order[i];

	//해법
	answer = solution();

	//출력
	cout << answer << "\n";

	//종료
	return 0;
}