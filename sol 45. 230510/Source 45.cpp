#include<iostream>
using namespace std;
int main() {
	int N, K;
	cin >> N >> K;
	int* arr = new int[N];
	for (int i = 0; i < N; i++)
		arr[i] = i + 1;
	int ptr = 0, endptr = N - 1;
	int j = 0;
	cout << "<";
	while (endptr > 0) {
		for (int i = 0; i < K - 1; i++) {
			if (ptr >= endptr)
				ptr -= endptr + 1;
			ptr++;
		}
		cout << arr[ptr]<<", ";
		for (int i = ptr; i < endptr; i++) {
			arr[i] = arr[i + 1];
		}
		endptr--;
	}
	cout << arr[0]<<">";
}