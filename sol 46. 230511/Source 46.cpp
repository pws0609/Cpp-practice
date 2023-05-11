#include<iostream>
using namespace std;
int main() {
	int N;
	cin >> N;
	int* work = new int[N];
	int sum = 0;
	for (int i = 0; i < N; i++) {
		cin >> work[i];
		sum += work[i];
	}

	int K;
	cin >> K;

	if (sum < K) {
		cout << -1;
		return 0;
	}
	int ptr = 0;
	for (int i = 0; i < K; i++) {
		if (ptr == N)
			ptr = 0;
		while (work[ptr] == 0) {
			ptr++;
			if (ptr == N)
				ptr = 0;
		}
		work[ptr++]--;
	}
	while (work[ptr] == 0) {
		ptr++;
		if (ptr == N)
			ptr = 0;
	}
	cout << ptr;
	return 0;
}