#include<iostream>
#include<vector>
using namespace std;
int N, R;
int main() {
	vector<vector<int>> res;
	int tot = 1;
	cin >> N >> R;
	int* num = new int[N];
	for (int i = 0; i < N; i++) {
		cin >> num[i];
	}
	for (int i = 0; i < R; i++) {
		tot *= (N - i);
	}
	while (R > 0) {
		for (int i = 0; i < R+1; i++) {

		}
	}
	return 0;
}