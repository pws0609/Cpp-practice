#include<iostream>
using namespace std;
void DFS(int a, int b);
int cnt = 0;
int dx[4] = { -1,0,1,0 };
int dy[4] = { 0,1,0,-1 };
int** graph;
//방문 여부 판별
int** chk;
int main(){
	graph = new int* [7];
	chk = new int* [7];
	for (int i = 0; i < 7; i++) {
		graph[i] = new int[7]();
		chk[i] = new int[7]();
		for (int j = 0; j < 7; j++)
			cin >> graph[i][j];
	}
	chk[0][0] = 1;
	DFS(0, 0);
	cout << cnt;
	return 0;
}

void DFS(int a, int b) {
	int aa, bb;
	if (a == 6 && b == 6)
		cnt++;
	else {
		for (int i = 0; i < 4; i++) {
			aa = a + dx[i];
			bb = b + dy[i];
			if (aa < 0 || aa>6 || bb < 0 || bb>6)
				continue;
			if (graph[aa][bb] == 0 && chk[aa][bb] == 0) {
				chk[aa][bb] = 1;
				DFS(aa, bb);
				chk[aa][bb] = 0;
			}
		}
	}
}