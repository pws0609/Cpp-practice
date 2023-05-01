#include <iostream>
using namespace std;
int main() {
	int N;
	cin >> N;
	int cnt = 0;
	int startnum = 0;
	if (N % 2 == 1) {
		cout << N / 2 << " + " << N / 2 + 1<< " = " << N << endl;
		cnt++;
	}
	for (int i = 3; i < N; i++) {
		//Â¦¼ö 
		if (i % 2 == 0) {
			int divide = i / 2;
			if (N % divide != 0)
				continue;
			int neck = N / divide;
			startnum = (neck - 1) / 2 - divide + 1;
			if (startnum <= 0)
				continue;
			if ((startnum * 2 + i - 1) * divide == N) {
				cnt++;
				cout << startnum;
				for (int j = 1; j < i; j++) {
					cout << " + " << startnum + j;
				}
				cout << " = " << N << endl;
			}
		}
		//È¦¼ö 
		else {
			int num = N % i;
			int startnum = (N / i) - (i - 1) / 2;
			if (num != 0)
				continue;
			if (startnum > 0) {
				cnt++;
				cout << startnum;
				for (int j = 1; j < i; j++) {
					cout << " + " << startnum + j;
				}
				cout << " = " << N << endl;
			}
		}
	}
	cout << cnt;

	return 0;
}
