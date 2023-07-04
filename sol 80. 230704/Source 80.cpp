#include<iostream>
using namespace std;
int N, M, reach, cost;
int** graph;
int* chk;
void DFS(int a,int b, int sum);

int main() {
	int a, b, c;
	cin >> N >> M;
	graph = new int* [N + 1];
	for (int i = 0; i < N + 1; i++)
		graph[i] = new int[N + 1]();
	chk = new int[N + 1]();
	for (int i = 0; i < M; i++) {
		cin >> a >> b >> c;
		graph[a][b] = c;
	}
	for (int i = 2; i <= N; i++) {
		cost = 2147483647;
		reach = 0;
		fill_n(chk, N + 1, 0);
		chk[1] = 1;
		DFS(1, i, 0);
		if (reach == 1)
			cout << i << " : " << cost << '\n';
		else
			cout << i << " : impossible" << '\n';
	}
	return 0;
}

void DFS(int a, int b, int sum) {
	if (a == b) {
		reach = 1;
		if (sum < cost) {
			cost = sum;
		}
	}
	else {
		for (int i = 1; i <= N; i++) {
			if (graph[a][i] != 0 && chk[i] == 0) {
				chk[i] = 1;
				DFS(i, b, sum + graph[a][i]);
				chk[i] = 0;
			}
		}
	}
}