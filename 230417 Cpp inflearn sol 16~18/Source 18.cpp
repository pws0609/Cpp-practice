#include<iostream>
using namespace std;
int main() {
	int N;
	int M;
	int cnt = 0;
	int cnt2 = 0;
	int cnt3 = 0;
	cin >> N >> M;
	int* arr = new int[N];
	
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
		if (arr[i] > M) {
			cnt++;
			cnt2++;
		}
		else
			cnt = 0;
		if (cnt3 < cnt)
			cnt3 = cnt;
	}
	if (cnt2 == 0) {
		cout << -1;
		return 0;
	}
	cout << cnt3;
	return 0;
}