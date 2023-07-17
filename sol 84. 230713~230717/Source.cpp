#include<iostream>
using namespace std;
int* graph[2];
int N, res = 0;
void DFS(int a, int tmp);
int main() {
	cin >> N;
	graph[0] = new int[N + 1];
	graph[1] = new int[N + 1];
	int T, P;
	for (int i = 1; i < N+1; i++) {
		cin >> T >> P;
		graph[0][i] = T;
		graph[1][i] = P;
	}
	DFS(1, 0);
	cout << res;
}

void DFS(int a, int tmp) {
	if (a == N + 1) {
		if (res < tmp) {
			res = tmp;
		}
	}
	else {
		if (a + graph[0][a] <= N + 1)
			DFS(a + graph[0][a], tmp + graph[1][a]);
		DFS(a + 1, tmp);
	}
}