#include<iostream>
#include<vector>
using namespace std;
int N, M, result = 2100000000;
vector<pair<int, int>> graph[20];
int* chk;
void DFS(int a, int sum);
int main() {
	int a, b, c;
	cin >> N >> M;
	chk = new int[N]();
	for (int i = 0; i < M; i++) {
		cin >> a >> b >> c;
		graph[a - 1].push_back(make_pair(b - 1, c));
	}
	chk[0] = 1;
	DFS(0,0);
	cout << result;
}

void DFS(int a, int sum) {
	if (a == N - 1) {
		if (sum < result)
			result = sum;
	}
	else {
		for (int i = 0; i < graph[a].size(); i++) {
			if (chk[graph[a][i].first] == 0) {
				chk[graph[a][i].first] = 1;
				DFS(graph[a][i].first, sum + graph[a][i].second);
				chk[graph[a][i].first] = 0;
			}
		}
	}
}