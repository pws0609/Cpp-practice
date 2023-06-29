#include<iostream>
#include<vector>
#include<algorithm>
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
	int V, E, a, b, c, sml;
	for (int i = 0; i < 1001; i++)
		unf[i] = i;
	cin >> V >> E;
	int** aa;
	aa = new int*[E];
	for (int i = 0; i < E; i++)
		aa[i] = new int[3];
	for (int i = 0; i < E; i++) {
		cin >> a >> b >> c;
		aa[i][0] = a;
		aa[i][1] = b;
		aa[i][2] = c;
	}
	int mem, k = 0;
	for (int i = 0; i < E; i++) {
		mem = 0;
		sml = 2100000000;
		for (k = 0; k < E; k++) {
			if (aa[k][2] < sml) {
				sml = aa[k][2];
				mem = k;
			}
		}
		if (Find(aa[k][0]) != Find(aa[k][1]))
			;
	}
}