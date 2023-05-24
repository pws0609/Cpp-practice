#include<iostream>
using namespace std;
void recur(int a);
int main() {
	int N;
	cin >> N;
	recur(N);
	return 0;
}

void recur(int a) {
	if (a == 1) {
		cout << 1;
		return;
	}
	else {
		recur(a / 2);
		cout << a % 2;
	}
}