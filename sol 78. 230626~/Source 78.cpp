#include<iostream>
using namespace std;
int unf[1001], cost = 0;
int Find(int a) {
	if (a == unf[a])
		return a;
	else
		return Find(unf[a]);
}
void Union(int a, int b) {
	a = Find(a);
	b = Find(b);
	if (a != b)
		unf[a] = b;
}
int main() {
	int V, E, a, b, c;
	cin >> V >> E;
	for (int i = 0; i < 1001; i++)
		unf[i] = i;
	for (int i = 0; i < E; i++) {
		cin >> a >> b >> c;
	}
}