#include<iostream>
using namespace std;
int main() {
	char* bracket = new char[30];
	cin >> bracket;
	int cnt = 0;
	for (int i = 0; bracket[i] != '\0'; i++) {
		if (cnt < 0)
			break;
		bracket[i] == '(' ? cnt++ : cnt--;
	}
	cnt == 0 ? cout << "YES" : cout << "NO";
}