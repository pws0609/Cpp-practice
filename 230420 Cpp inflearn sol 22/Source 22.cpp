#include<iostream>
using namespace std;
int main() {
	int N;
	int K;
	int tmp = 0;
	int tmp2 = 0;
	int sumtmp;
	cin >> N;
	cin >> K;
	int* arr = new int[N];
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < K; i++) {
		tmp2 += arr[i];
	}
	sumtmp = tmp2;
	for (int i = 0; i < N - K + 1; i++) {
		sumtmp -= arr[i];
		sumtmp += arr[i+K];
		if (tmp2 < sumtmp) {
			tmp2 = sumtmp;
		}
	}
	cout << tmp2;
}