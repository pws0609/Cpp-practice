#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main() {
	int N, M, tmp;
	cin >> N >> M;
	vector<int> arr;
	for (int i = 0; i < N; i++) {
		cin >> tmp;
		arr.push_back(tmp);
	}
	sort(arr.begin(), arr.end());
	int lt = 0, rt = N - 1, mid;
	while (lt <= rt) {
		mid = (lt + rt) / 2;
		if (arr[mid] == M) {
			cout << mid + 1;
			return 0;
		}
		else if (arr[mid] > M)
			rt = mid - 1;
		else
			lt = mid + 1;
	}

	return 0;
}