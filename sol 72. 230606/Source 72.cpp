#include<iostream>
#include<queue>
using namespace std;
int main() {
	queue<int> Q;
	int N, K, x;
	cin >> N >> K;
	for (int i = 1; i <= N; i++)
		Q.push(i);
	while (Q.size() > 1) {
		for (int i = 0; i < K - 1; i++) {
			x = Q.front();
			Q.pop();
			Q.push(x);
		}
		Q.pop();
	}
	cout << Q.front();
}