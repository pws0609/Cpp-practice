#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main() {
	stack<char> parenthesis;
	string a;
	cin >> a;
	int top = 0;
	for (int i = 0; i < a.length(); i++) {
		if (a[i] == '(') {
			parenthesis.push(a[i]);
			top++;
		}
		else {
			top--;
			if (top < 0) {
				cout << "NO";
				return 0;
			}
			parenthesis.pop();
		}
	}
	if (top == 0)
		cout << "YES";
	else
		cout << "NO";
	return 0;
}