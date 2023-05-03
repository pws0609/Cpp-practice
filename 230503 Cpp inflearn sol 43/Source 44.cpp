#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main() {
	int N, M, max = 0, res = 0;
	vector<int> arr;
	int value;
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		cin >> value;
		arr.push_back(value);
		if (value > max)
			max = value;
	}

	sort(arr.begin(), arr.end());

	for (int i = 0; i < N; i++) {
		cout << arr[i] << " ";
	}
	return 0;
}