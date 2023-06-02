#include<iostream>
using namespace std;
int N, M, result = 2100000000;
int** graph;
int* chk;
void DFS(int a, int sum);
int main() {
	int a, b, c;
	cin >> N >> M;
	graph = new int* [N];
	for (int i = 0; i < N; i++)
		graph[i] = new int[N]();
	chk = new int[N]();
	for (int i = 0; i < M; i++) {
		cin >> a >> b >> c;
		graph[a - 1][b - 1] = c;
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
		for (int i = 0; i < N; i++) {
			if (graph[a][i] != 0 && chk[i] == 0) {
				chk[i] = 1;
				DFS(i, sum + graph[a][i]);
				chk[i] = 0;
			}
		}
	}
}