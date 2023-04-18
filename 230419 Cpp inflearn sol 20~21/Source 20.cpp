#include<iostream>
using namespace std;
char res(int a, int b);
int main() {
	int N;
	cin >> N;
	int* A = new int[N];
	int* B = new int[N];
	for (int i = 0; i < N; i++)
		cin >> A[i];
	for (int i = 0; i < N; i++)
		cin >> B[i];
	for (int i = 0; i < N; i++)
		cout << res(A[i], B[i]) << endl;
	return 0;
}

char res(int a, int b) {
	if (a == b)
		return 'D';
	if ((a == 1 && b == 2) || (a == 2 && b == 3) || (a == 3 && b == 1))
		return 'B';
	else
		return 'A';
}