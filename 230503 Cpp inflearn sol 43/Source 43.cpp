#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int able(int mid);
int N, M;
vector<int> arr;
int main() {
	int value;
	cin >> N >> M;
	int lt = 0, rt = 0, mid, max = 0;
	for (int i = 0; i < N; i++) {
		cin >> value;
		arr.push_back(value);
		rt += value;
		if (arr[i] > max) max = a[i];
	}
	int res = 0;
	while (lt <= rt) {
		mid = (lt + rt) / 2;
		if (mid >= max && able(mid) <= M) {
			res = mid;
			rt = mid - 1;
		}
		else
			lt = mid + 1;
	}
	cout << res;
	return 0;
}

int able(int mid) {
	int i, cnt = 1, sum = 0;
	for (i = 0; i < N; i++) {
		if (sum + arr[i] > mid) {
			cnt++;
			sum = arr[i];
		}
		else sum += arr[i];
	}
	return cnt;
}