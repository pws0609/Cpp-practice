#include<iostream>
using namespace std;
void DFS(int a);
int N, M, cnt = 0;
int** graph;
int** arr;
int main(){
	cin >> N >> M;
	graph = new int* [N];
	for (int i = 0; i < N; i++)
		graph[i] = new int[N]();
	arr = new int* [M];
	for (int i = 0; i < M; i++) {
		arr[i] = new int[2]();
		for (int j = 0; j < 2; j++)
			cin >> arr[i][j];
	}
	for (int i = 0; i < M; i++) {
		graph[arr[i][0]][arr[i][1]] = 1;
	}
	DFS(1);
	cout << cnt;
	return 0;
}

void DFS(int a) {
	if (a == 5) {
		cnt++;
		return;
	}
	else {
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				if (graph[i][j] != 0) {
					graph[i][j] = 0;
					DFS(j);
				}
			}
		}
	}
}