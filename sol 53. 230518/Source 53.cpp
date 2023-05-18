#include<iostream>
#include<stack>
using namespace std;
void jinsu(int N, int K);
void jinsu16(int N);
int main() {
	int N, K = 0;
	cin >> N >> K;

	switch (K) {
	case 2:
	case 5:
	case 8:
		jinsu(N, K);
		break;
	case 16:
		jinsu16(N);
		break;
	}
	return 0;
}

void jinsu(int N, int K) {
	stack<int> res;
	while (N > 0) {
		res.push(N % K);
		N /= K;
	}
	while (!res.empty()) {
		cout << res.top();
		res.pop();
	}
}

void jinsu16(int N) {
	stack<char> res;
	int left = 0;
	while (N > 0) {
		if (10 > N % 16)
			left = N % 16 + 48;
		else
			left = N % 16 + 55;
		res.push(left);
		N /= 16;
	}
	while (!res.empty()) {
		cout << res.top();
		res.pop();
	}
}