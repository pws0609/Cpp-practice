#include<iostream>
using namespace std;
int main() {
	int N;
	int sum = 1;
	cin >> N;
	cout << "1";
	for (int i = 2; i < N; i++) {
		if (N % i == 0) {
			cout << " + " << i;
			sum += i;
		}
	}
	cout << " = " << sum;
	return 0;
}