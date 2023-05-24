#include<iostream>
using namespace std;
int tmp = 1;
void call(int a);
int main() {
	int N;
	cin >> N;
	call(N);
	return 0;
}
/*int call(int a) {
	cout << tmp++ << " ";
	if (tmp > a)
		return 0;
	call(a);
}*/
void call(int a) {
	if (a > 0) {
		call(a - 1);
		cout << a << " ";
	}
}