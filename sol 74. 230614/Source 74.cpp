#include<iostream>
#include<queue>
using namespace std;
int main() {
	int a;
	priority_queue<int> pQ;
	while (true) {
		cin >> a;
		if (a == -1)
			break;
		if (a == 0) {
			if (pQ.empty())
				cout << -1;
			cout << -1 * pQ.top() << '\n';
			pQ.pop();
		}
		else {
			pQ.push(-a);
		}
	}
}