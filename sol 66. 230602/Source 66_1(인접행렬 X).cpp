#include<iostream>
using namespace std;
int N, M, cnt = 0;
int** graph;
int* chk;
void DFS(int L);
int main() {
	cin >> N >> M;
	graph = new int* [N];
	for (int i = 0; i < N; i++)
		graph[i] = new int[N]();
	chk = new int[N]();
	int a, b;
	for (int i = 0; i < M; i++) {
		cin >> a >> b;
		graph[a - 1][b - 1] = 1;
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
		for (int i = 0; i < N; i++) {
			if (graph[L][i] == 1 && chk[i] == 0) {
				chk[i] = 1;
				DFS(i);
				chk[i] = 0;
			}
		}
	}
}