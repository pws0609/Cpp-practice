#include<iostream>
using namespace std;
int main() {
	long long int N;
	long long int tmp;
	long long int decimal = 1;;
	long long int cnt = 0;
	cin >> N;
	tmp = N;
	while (tmp > 0) {
		if (tmp % 10 >= 3)
			cnt += (tmp / 10 + 1) * decimal;
		else
			cnt += tmp / 10 * decimal;
		tmp /= 10;
		decimal *= 10;
	}
	cout << cnt;
	return 0;
}