#include<iostream>
using namespace std;
int main() {
	int N;
	cin >> N;
	int* work = new int[N+1]();
	int sum = 0;
	for (int i = 1; i < N+1; i++) {
		cin >> work[i];
		sum += work[i];
	}

	int K;
	cin >> K;

	if (sum <= K) {
		cout << "-1";
		return 0;
	}
	
	int ptr = 1;
	for (int i = 0; i < K; i++) {
//		cout<<i<<":";
//		for(int j = 1; j<N+1;j++){
//			cout<<work[j]<<" ";
//		}
//		cout<<endl;
		ptr++;
		if (ptr >= N+1)
			ptr = 1;
		while (work[ptr] == 0) {
			ptr++;
			if (ptr >= N+1)
				ptr = 1;
		}
		work[ptr]--;
	}
	while (work[ptr] == 0) {
		ptr++;
		if (ptr >= N+1)
			ptr = 1;
	}
	cout << ptr;
	return 0;
}
