#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>
using namespace std;
int main() {
	string A;
	string B;
	long long int C = 0;
	int* arr;
	int cnt = 0;
	cin >> A;
	for (int i = 0; i < A.length(); i++) {
		if (A[i] >= '0' && A[i] <= '9') {
			B.append(1,A[i]);
		}
	}
	C = stoi(B);
	cout << C;
	for (int i = 1; i < sqrt(C); i++) {
		if (C % i == 0) {
			//cout << i << " ";
			cnt++;
		}
	}
	cnt *= 2;
	if (sqrt(C) - (int)sqrt(C) == 0)
		cnt++;
	cout << endl << cnt;
}