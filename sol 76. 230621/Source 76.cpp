#include<iostream>
using namespace std;
int dy[20][20];
int DFS(int n, int r);
int main() {
	int N, R;
	cin >> N >> R;
	cout << DFS(N, R);
	return 0;
}

int DFS(int n, int r) {
	if (n == r)
		return 1;
	if (r == 1)
		return n;
	if (n - r == 1)
		return n;
	return dy[n][r] = DFS(n - 1, r - 1) + DFS(n - 1, r);
}