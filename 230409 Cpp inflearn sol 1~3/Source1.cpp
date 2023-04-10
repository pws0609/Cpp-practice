#include <iostream>
using namespace std;
int main() {
	int n = 0;
	int m = 0;
	int res = 0;
	int temp = 0;

	cin >> n >> m;

	while (true) {
		temp += m;
		n -= m;
		if (n >= 0)
			res += temp;
		else
			break;
	}

	cout << res << endl;

	return 0;
}