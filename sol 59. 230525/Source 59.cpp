#include<iostream>
using namespace std;
void node(int a);
int N;
int* arr;
int main() {
	cin >> N;
	arr = new int(N+1);
	node(1);
	return 0;
}

void node(int a) {
	if (a == N + 1) {
		for (int i = 1; i < N+1; i++) {
			if (arr[i] == 1)
				cout << i << " ";
		}
		cout << endl;
		return;
	}
	else {
		arr[a] = 1;
		node(a+1);
		arr[a] = 0;
		node(a+1);
	}
}