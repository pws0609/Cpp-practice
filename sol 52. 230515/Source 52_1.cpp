#include<iostream>
using namespace std;
bool isUgly(int a);
int main() {
	int N, res = 0;
	cin >> N;
	int integer = 0;
	while (N > 0) {
		if (isUgly(++integer))
			N--;
	}
	cout << integer;
	return 0;
}

bool isUgly(int a) {
	while (a % 2 == 0)
		a /= 2;
	while (a % 3 == 0)
		a /= 3;
	while (a % 5 == 0)
		a /= 5;

	if (a == 1)
		return true;
	else
		return false;

}