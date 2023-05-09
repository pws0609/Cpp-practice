#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int N;
int cnt(int len, vector<int> x) {
	int i, cnt = 1, pos = x[0];
	for (i = 1; i < N; i++) {
		if (x[i] - pos >= len) {
			cnt++;
			pos = x[i];
		}
	}
	return cnt;
}
int main() {
	int M, res = 0;
	vector<int> arr;
	int value;
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		cin >> value;
		arr.push_back(value);
	}

	sort(arr.begin(), arr.end());

	int rt = arr[N - 1];
	int lt = 1;
	int mid;
	while (lt <= rt) {
		mid = (lt + rt) / 2;
		if (cnt(mid,arr) >= M) {
			lt = mid + 1;
			res = mid;
		}
		else{
			rt = mid - 1;
		}
	}

	cout << res;

	return 0;
}