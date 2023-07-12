#include<iostream>				
#include<algorithm>				
#include<string>				
#include<cmath>				
using namespace std;
string A, B, C, TOT;
int* totnum;
int* chk;
int cnt = 0;
int Anum();
int Bnum();
int Cnum();
void DFS(int x);
int main() {
	cin >> A >> B >> C;
	int a = 1;
	TOT.append(A);
	TOT.append(B);
	TOT.append(C);
	sort(TOT.begin(), TOT.end());
	while (TOT[a] != '\0') {
		if (TOT[a + 1] == TOT[a]) {
			TOT.erase(TOT.begin() + a, TOT.begin() + a + 1);
			a--;
		}
		a++;
	}
	totnum = new int[TOT.length()]();
	chk = new int[10]();
	DFS(1);
	cout << cnt;
}

void DFS(int x) {
	if (x == TOT.length() + 1) {
		if (Cnum() == Anum() + Bnum()) {
			cnt++;
//			cnt = 1;
		}
	}
	else {
//		if (cnt == 0) {
		for (int i = 0; i < 10; i++) {
			if (chk[i] == 0) {
				totnum[x - 1] = i;
				chk[i] = 1;
				DFS(x + 1);
				chk[i] = 0;
			}
		}
//		}
	}
}

int Anum() {
	int i = 0, res = 0, j;
	while (A[i] != '\0') {
		for (j = 0; j < TOT.length(); j++) {
			if (TOT[j] == A[i])
				break;
		}
		res += totnum[j] * pow(10, A.length() - i - 1);
		i++;
	}
	return res;
}

int Bnum() {
	int i = 0, res = 0, j;
	while (B[i] != '\0') {
		for (j = 0; j < TOT.length(); j++) {
			if (TOT[j] == B[i])
				break;
		}
		res += totnum[j] * pow(10, B.length() - i - 1);
		i++;
	}
	return res;
}

int Cnum() {
	int i = 0, res = 0, j;
	while (C[i] != '\0') {
		for (j = 0; j < TOT.length(); j++) {
			if (TOT[j] == C[i])
				break;
		}
		res += totnum[j] * pow(10, C.length() - i - 1);
		i++;
	}
	return res;
}