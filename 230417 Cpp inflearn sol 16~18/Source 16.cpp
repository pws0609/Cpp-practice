#include<iostream>
#include<string>
using namespace std;
bool islarge(char a);
int main() {
	string A;
	string B;
	char alphabet[2][52] = { 0, };
	cin >> A >> B;
	if (A.length() != B.length()) {
		cout << "NO";
		return 0;
	}
	for (int i = 0; i < A.length(); i++) {
		if (islarge(A[i]))
			alphabet[0][A[i] - 65]++;
		else
			alphabet[0][A[i] - 71]++;
		if (islarge(B[i]))
			alphabet[1][B[i] - 65]++;
		else
			alphabet[1][B[i] - 71]++;
	}
	for (int i = 0; i < 52; i++) {
		if (alphabet[0][i] == alphabet[1][i])
			continue;
		else {
			cout << "NO";
			return 0;
		}
	}
	cout << "YES";
	return 0;
}

bool islarge(char a) {
	bool res;
	if (a >= 65 && a <= 90)
		return true;
	//else if (a >= 97 && a <= 122)
	else
		return false;
}