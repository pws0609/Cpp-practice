#include<iostream>
#include<cmath>
using namespace std;
int findmedicine(int a);
int main() {
	int N = 0;
	cin >> N;
	cout << 1 << " ";
	for (int i = 2; i < N; i++) {
		cout << findmedicine(i) << " ";
	}
	cout << findmedicine(N);
	return 0;
}

int findmedicine(int a) {
	int res = 0;
	for (int i = 1; i < sqrt(a); i++)
		if (a % i == 0)
			res++;
	res *= 2;
	if (sqrt(a) - (int)sqrt(a) == 0)
		res++;
	return res;
}