#include<iostream>
using namespace std;
void makesame(char chr, int num);
string A, B, C, SUM;
int* a;
int* b;
int* c;
int alen, blen, clen, sum;
int main(){
	cin >> A >> B >> C;
	alen = A.length();
	blen = B.length();
	clen = C.length();
	SUM.append(A);
	SUM.append(B);
	SUM.append(C);
	a = new int[alen]();
	b = new int[blen]();
	c = new int[clen]();
	sum = A.length() + B.length() + C.length();
	for (int i = 1; i < 9; i++) {
		a[alen - 1] = i;
		makesame(A[alen - 1], i);
	}
	for (int i = 0; i < alen; i++)
		cout << a[i];
	cout << '\n';
	for (int i = 0; i < blen; i++)
		cout << b[i];
	cout << '\n';
	for (int i = 0; i < clen; i++)
		cout << c[i];
	cout << '\n';
	return 0;
}

void makesame(char chr, int num) {
	for (int i = 0; i < alen; i++) if (A[i] == chr) a[i] = num;
	for (int i = 0; i < blen; i++) if (B[i] == chr) b[i] = num;
	for (int i = 0; i < clen; i++) if (C[i] == chr) c[i] = num;
}