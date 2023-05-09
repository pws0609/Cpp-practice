#include<iostream>
#include<algorithm>
#include<vector>
#include<iterator>
using namespace std;
int main() {
	int N, M, max = 0, res = 0;
	vector<int> arr;
	vector<int> arr2;
	int value;
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		cin >> value;
		arr.push_back(value);
		if (value > max)
			max = value;
	}

	sort(arr.begin(), arr.end());
	arr2.push_back(arr[1] - arr[0]);
	for (int i = 1; i < N - 1; i++)
		arr2.push_back(arr[i + 1] - arr[i]);
	int* sumarr = new int[arr2.size()]();
	int* resarr = new int[arr2.size()]();

	int rt = arr[N - 1];
	int lt = arr[0];
	int cnt = 0, mid, sum, j;
	while (lt <= rt) {
		mid = (lt + rt) / 2;
		sum = 0;
		j = 0;
		for (int i = 0; i < N - 1; i++) {
			if (sum + arr2[i] <= mid) {
				sum += arr2[i];
			}
			else {
				sumarr[j++] = sum;
				cnt++;
			}
		}
		if (cnt > M - 1) {
			lt = mid + 1;
		}
		else {
			res = mid;
			copy_n(sumarr, arr2.size()-1, resarr);
			rt = mid - 1;
		}
	}

	int answer = 1000000000;
	for (int i = 0; i < arr2.size(); i++) {
		if (resarr[i] == 0)
			continue;
		if (resarr[i] < answer)
			answer = resarr[i];
	}
	cout << answer;

	return 0;
}