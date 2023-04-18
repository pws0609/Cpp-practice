#include<iostream>
using namespace std;
#define N 10
int fight(int a, int b);
int main() {
	int* A = new int[N];
	int* B = new int[N];
	char* res = new char[N];
	int ascr = 0;
	int bscr = 0;
	int totdraw = 0;
	for (int i = 0; i < N; i++)
		cin >> A[i];
	for (int i = 0; i < N; i++)
		cin >> B[i];
	for (int i = 0; i < N; i++) {
		if (A[i] == B[i])
			totdraw++;
	}
	if (totdraw == 10) {
		cout << "10 10" << endl << 'D';
		return 0;
	}
	for (int i = 0; i < N; i++) {
		switch (fight(A[i], B[i])) {
		case 0:
			ascr++;
			bscr++;
			res[i] = 'D';
			break;
		case 1:
			ascr += 3;
			res[i] = 'A';
			break;
		case 2:
			bscr += 3;
			res[i] = 'B';
			break;
		}
	}
	cout << ascr << ' ' << bscr << endl;

	if (ascr > bscr)
		cout << 'A';
	else if (bscr > ascr)
		cout << 'B';
	else {
		for (int i = N - 1; i > 0; i--) {
			if (res[i] == 'D')
				continue;
			else {
				cout << res[i];
				return 0;
			}
		}
	}
	return 0;
}

int fight(int a, int b) {
	if (a > b)
		return 1;
	else if (b > a)
		return 2;
	else
		return 0;
}