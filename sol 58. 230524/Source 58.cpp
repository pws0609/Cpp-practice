#include<iostream>
using namespace std;
void node(int a);
int main() {
	node(1);
	return 0;
}

void node(int a) {
	if (a > 7)
		return;
	else {
		//����: cout << a << " ";
		node(a * 2);
		//����: cout << a << " ";
		node(a * 2 + 1);
		//����: cout << a << " ";
	}
}