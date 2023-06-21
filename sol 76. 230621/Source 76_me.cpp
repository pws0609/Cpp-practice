#include<iostream>
using namespace std;
int fact(int a);
int main() {
	float N, R;
	cin >> N >> R;
	float res = 1;
	for (int i = N; i > R; i--) {
		res *= i;
		res /= i - R;
	}
	cout << res;
	return 0;
}

//N! Àç±ÍÇÔ¼ö
int fact(int a) {
	if (a == 1)
		return 1;
	return a * fact(a - 1);
}