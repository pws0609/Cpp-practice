#include<iostream>
using namespace std;
int main() {
	int N;
	int cnt = 0;
	int tmp;
	cin >> N;
	int* arr = new int[N];
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	tmp = arr[N - 1];
	for (int i = N - 2; i >= 0; i--) {
		if (arr[i] > tmp) {
			cnt++;
			tmp = arr[i];
		}
	}
	cout << cnt;
	return 0;
}