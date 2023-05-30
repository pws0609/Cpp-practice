#include<iostream>
using namespace std;
void DFS(int a);
int N, M, cnt = 0;
int** graph;
//방문 여부 판별
int* chk;
int** arr;
int main(){
	cin >> N >> M;
	graph = new int* [N];
	chk = new int[N]();
	for (int i = 0; i < N; i++)
		graph[i] = new int[N]();
	arr = new int* [M];
	for (int i = 0; i < M; i++) {
		arr[i] = new int[2]();
		for (int j = 0; j < 2; j++)
			cin >> arr[i][j];
	}
	for (int i = 0; i < M; i++) {
		graph[arr[i][0] - 1][arr[i][1] - 1] = 1;
	}
	chk[0] = 1;
	DFS(0);
	cout << cnt;
	return 0;
}

void DFS(int a) {
	if (a == N - 1)
		cnt++;
	else {
		for (int i = 0; i < N; i++) {
			if (graph[a][i] == 1 && chk[i] == 0) {
				chk[i] = 1;
				DFS(i);
				chk[i] = 0;
			}
		}
	}
}