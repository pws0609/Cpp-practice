#include<iostream>
#include<vector>
using namespace std;
int N, M, cnt = 0;
vector<int> map[30];
int* chk;
void DFS(int L);
int main() {
	cin >> N >> M;
	chk = new int[N]();
	int a, b;
	for (int i = 0; i < M; i++) {
		cin >> a >> b;
		map[a - 1].push_back(b - 1);
	}
	chk[0] = 1;
	DFS(0);
	cout << cnt;
	return 0;
}

void DFS(int L) {
	if (L == N - 1)
		cnt++;
	else {
		for (int i = 0; i < map[L].size(); i++) {
			if (chk[map[L][i]] == 0) {
				chk[map[L][i]] = 1;
				DFS(map[L][i]);
				chk[map[L][i]] = 0;
			}
		}
	}
}